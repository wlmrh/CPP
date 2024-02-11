#include <stdio.h>

int gcd(int a, int b);

int main()
{
  int m, n;
  scanf("%d %d", &m, &n);
  int min = gcd(m, n);
  int max = m * n / min;
  printf("最小公倍数为%d,最大公约数为%d。", max, min);
  return 0;
}

int gcd(int a, int b)
{
  if(a == 0) return b;
  if(b == 0) return a;
  int inter = (a + b) % b;
  a = b;
  b = inter;
  gcd(a, b);
}