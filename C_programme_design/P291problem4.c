#include <stdio.h>

void solve(int *a1, int *a2, int n, int m)
{
  for(int i = 0; i < m; i++)
  {
    *(a2 + i) = *(a1 + i + n - m);
  }
  for(int i = n - m; i >= 0; i--)
  {
    *(a1 + i + m) = *(a1 + i);
  }
  for(int i = 0; i < m; i++)
  {
    *(a1 + i) = *(a2 + i);
  }
}

int main()
{
  int n, m, a[100], b[100];
  scanf("%d%d", &n, &m);
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  solve(a, b, n, m);
  for(int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  return 0;
}