#include <stdio.h>
#include <math.h>

double dis(double x1, double y1, double x2, double y2);

int main()
{
  double x1, y1;
  scanf("%lf %lf", &x1, &y1);
  if(dis(x1, y1, 2, 2) - 1 <= 0) {printf("10m"); return 0;}
  else if(dis(x1, y1, -2, 2) - 1 <= 0) {printf("10m"); return 0;}
  else if(dis(x1, y1, 2, -2) - 1 <= 0) {printf("10m"); return 0;}
  else if(dis(x1, y1, -2, -2) - 1 <= 0) {printf("10m"); return 0;}
  else printf("0m");
  return 0;
}

double dis(double x1, double y1, double x2, double y2)
{
  double dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  return dis;
}