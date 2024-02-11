#include <stdio.h>
int a[20][20] = {0}, b[20][20] = {0}, n = 0;
void odd_square_fill(int level, int add, int x, int y);
void double_even(int level);
void even(int level);

int main()
{
  scanf("%d", &n);
  if(n % 2 == 1) odd_square_fill(n, 0, 1, 1);
  else if(n % 4 == 0) double_even(n);
  else if(n % 4 == 2) even(n);
  //最终输出
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= n; j++)
    {
      printf("%4d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
//该函数完成奇数边长时的填数工作，level为所填正方形空间的边长，add为该方阵开始填的第一个数的值，x，y分别表示该正方形空间最左上角的点的行数、列数。
//a是最终该函数所填的方形区域所在的母方阵，b是为了便于处理设的方阵。
void odd_square_fill(int level, int add, int x, int y)
{
  int crt_l = 1, crt_c = (level + 1) / 2;
  for(int i = 1; i <= level * level; i++)
  {
    b[crt_l][crt_c] = i;
    a[crt_l + x - 1][crt_c + y - 1] = i + add;
    //判断是否在右上角
    if(crt_l == 1 && crt_c == level) {crt_l += 1; continue;}
    //判断下一个位置是否已经被覆盖，考虑了crt_l
    if(b[crt_l - 1 == 0? level : crt_l - 1][crt_c% level + 1] != 0) {crt_l += 1; continue;}
    crt_l = crt_l - 1 == 0? level : crt_l - 1;
    crt_c = crt_c % level + 1;
  }
  for(int i = 1; i <= level; i++)
  {
    for(int j = 1; j <= level; j++)
    {
      b[i][j] = 0;
    }
  }
}
//该函数完成四的倍数的边长时的填数工作
void double_even(int level)
{
  int initial = 1;
  int sum = level * level + 1;
  for(int i = 1; i <= level; i++)
  {
    for(int j = 1; j <= level; j++)
    {
      a[i][j] = initial;
      initial++;
    }
  }
  //四阶幻方用此法无法完成,需单独列出
  if(level == 4)
  {
    a[1][1] = 16;
    a[1][4] = 13;
    a[4][1] = 4;
    a[4][4] = 1;
    a[2][2] = 11;
    a[2][3] = 10;
    a[3][2] = 7;
    a[3][3] = 6;
  }
  for(int i = 1; i <= level / 2; i++)
  {
    a[i][i] = sum - a[i][i];
    a[i][i + level / 2] = sum - a[i][i + level / 2];
    a[i + level / 2][i] = sum - a[i + level / 2][i];
    a[i + level / 2][i + level / 2] = sum - a[i + level / 2][i + level / 2];
    a[i][1 + level / 2 - i] = sum - a[i][1 + level / 2 - i];
    a[i][1 + level - i] = sum - a[i][1 + level - i];
    a[i + level / 2][1 + level / 2 - i] = sum - a[i + level / 2][1 + level / 2 - i];
    a[i + level / 2][1 + level - i] = sum - a[i + level / 2][1 + level - i];
  }
}
//该函数完成模4余2的边长时的填数工作
void even(int level)
{
  odd_square_fill(level / 2, 0, 1, 1);
  odd_square_fill(level / 2, level * level / 4, 1 + level / 2, 1 + level / 2);
  odd_square_fill(level / 2, level * level / 2, 1, 1 + level / 2);
  odd_square_fill(level / 2, 3 * level * level / 4, 1 + level / 2, 1);
  int k = level / 4;
  int use = (level / 2) / 2;
  //左侧区域非中间行调整
  for(int i = 1; i <= use; i++)
  {
    for(int j = 1; j <= k; j++)
    {
      int inter = a[i][j];
      a[i][j] = a[i + level / 2][j];
      a[i + level / 2][j] = inter;
      inter = a[i + use + 1][j];
      a[i + use + 1][j] = a[i + level / 2 + use + 1][j];
      a[i + level / 2 + use + 1][j] = inter;
    }
  }
  //左侧区域中间行调整
  for(int i = 0; i <= k - 1; i++)
  {
    int inter = a[(level / 2 + 1) / 2][(level / 2 + 1) / 2 + i];
    a[(level / 2 + 1) / 2][(level / 2 + 1) / 2 + i] = a[(level / 2 + 1) / 2 + level / 2][(level / 2 + 1) / 2 + i];
    a[(level / 2 + 1) / 2 + level / 2][(level / 2 + 1) / 2 + i] = inter;
  }
  //右侧区域调整
  for(int i = 1; i <= level / 2; i++)
  {
    for(int j = 0; j < k - 1; j++)
    {
      int inter = a[i][use + level / 2 + 1 + j];
      a[i][use + level / 2 + 1 + j] = a[i + level / 2][use + level / 2 + 1 + j];
      a[i + level / 2][use + level / 2 + 1 + j] = inter;
    }
  }
}