#include <stdio.h>
#include <math.h>
double get_value(double x);

int main()
{
  double l = -10, r = 10, mid = 0;
  while(r - l >= pow(10, -6))
  {
    mid = (r + l) / 2;
    if(get_value(mid) >= 0) r = mid;
    if(get_value(mid) <= 0) l = mid;
  }
  printf("%lf", mid);
  return 0;
}

double get_value(double x)
{
  return 2 * pow(x, 3) - 4 * pow(x, 2) + 3 * x - 6;
}