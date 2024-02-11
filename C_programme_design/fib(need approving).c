#include <stdio.h>
#include <time.h>
long long feb(int n);

int main()
{
  clock_t start = clock();
  int first = 1, second = 1, i = 48;
  long long result = 0;
  printf("%d\n%d", first, second);
  while(i--)
  {
    printf("%lld\n", feb(50 - i));
  }
  clock_t end = clock();
  printf("%lfs", (double)(end - start)/CLOCKS_PER_SEC);
  return 0;
}

long long feb(int n)
{
  if(n == 1 || n == 2) return 1;
  return feb(n - 1) + feb(n - 2);
}