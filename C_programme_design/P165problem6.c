#include <stdio.h>
int a[100][100] = {0};

int main()
{//获取输出层数
  int n;
  scanf("%d", &n);
  //初始化，输入两侧的1
  for(int i = 1; i <= n; i++)
  {
    a[i][1] = 1;
    a[i][i] = 1;
  }
  //递推，从上到下算出空缺部分的值
  for(int i = 3; i <= n; i++)
  {
    for(int j = 2; j < n; j++)
    {
      a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
    }
  }
  //输出结果
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= i; j++)
    {
      printf("%d  ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}