#include <stdio.h>
int n, isout[10000] = {0};

void next(int *pos)
{
  int cnt = 3;
  while(cnt > 0)
  {
    while(isout[*pos] == 1)
    {
      *pos = (*pos + 1) == (n + 1)? 1 : (*pos + 1);
    }
    *pos = (*pos + 1) == (n + 1)? 1 : (*pos + 1);
    cnt--;
  }
  isout[(*pos - 1) == 0? n : (*pos - 1)] = 1;
}

int solve(int p)
{
  int pos = 1;
  while(p > 0)
  {
    next(&pos);
    p--;
  }
  return (pos - 1) == 0? n : (pos - 1);
}

int main()
{
  scanf("%d", &n);
  printf("%d", solve(n));
}