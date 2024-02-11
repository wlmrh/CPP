#include <stdio.h>

int a[5];

int main()
{
  int mid = 0;
  scanf("%d %d %d %d", &a[1], &a[2], &a[3], &a[4]);
  for(int i = 1; i <= 3; i++)
  {
    for(int j = i + 1; j <= 4; j++)
    {
      if(a[i] > a[j])
      {
        mid = a[i];
        a[i] = a[j];
        a[j] = mid;
      }
    }
  }
  for(int i = 1; i <= 4; i++) printf("%d ", a[i]);
  return 0;
}