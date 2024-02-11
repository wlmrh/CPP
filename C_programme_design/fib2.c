#include <stdio.h>
#include <time.h>
long long fib(long long x, long long y);
long long a = 1, b = 1;


int main()
{
  clock_t start = clock();
  printf("%lld\n%lld\n", a, b);
  int count = 24;
  while(count--)
  {
    a = fib(a, b);
    b = fib(a, b);
  }
  clock_t end = clock();
  printf("%lfs", (double)(end - start));
}

long long fib(long long x, long long y)
{
  long long c = x + y;
  printf("%lld\n", c);
  return c;
}