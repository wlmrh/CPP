#include <stdio.h>
int mday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int is_strange(int a);
int solve(int y, int m, int d);

int main()
{
  int year, month, day; scanf("%d/%d/%d", &year, &month, &day);
  printf("%d", solve(year, month, day));
}

int solve(int y, int m, int d)
{
  int rst = 0;
  if(is_strange(y)) mday[2] = 29;
  for(int i = 1; i < m; i++)
  {
    rst += mday[i];
  }
  rst += d;
  return rst;
}

int is_strange(int a)
{
  if((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) return 1;
  return 0;
}