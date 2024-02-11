#include <stdio.h>
#include <math.h>

int main(void)
{
  double p1, p2, p3, p4, p5;
  p1 = 1000 * (1 + 0.03 *5);
  p2 = 1000 * (1 + 0.021 * 2) * (1 + 0.0275 * 3);
  p3 = p2;
  p4 = 1000 * pow(1.015, 5);
  p5 = 1000 * pow((1 + 0.0035/4), 4 * 5);
  printf("p1 = %.2lf\n", p1);
  printf("p2 = %.2lf\n", p2);
  printf("p3 = %.2lf\n", p3);
  printf("p4 = %.2lf\n", p4);
  printf("p5 = %.2lf", p5);
  return 0;
}