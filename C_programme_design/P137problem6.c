#include <stdio.h>
long long permutation(int idx);

int main()
{
  printf("%lld", permutation(20));
  return 0;
}

long long permutation(int idx)
{
  long long sum = 0, mult = 1;
  for(int i = 1 ; i <= idx ; i++)
  {
    mult *= i;
    sum += mult;
  }
  return sum;
}