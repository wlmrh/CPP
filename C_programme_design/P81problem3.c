#include <stdio.h>
#include <math.h>

int main(void)
{
  double d = 300000, p = 6000, r = 0.01;
  double m;
  m = (log(p) - log(p - d * r))/log(1 + r);
  m = round(m * 10) / 10;
  printf("m = %.1lf", m);
  return 0;
}