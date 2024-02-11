#include <stdio.h>
int b[4] = {'0', 'X', 'Y', 'Z'};

int main()
{//令a,b，c的对手分别储存在a[0]，a[1]，a[2]中(X为1，Y为2，Z为3)
  for(int i = 1; i <= 3; i++)
  {
    int a[3] = {0};
    a[0] = i;
    for(int j = 1; j <= 3 && j != i; j++)
    {
      a[1] = j;
      a[2] = 6 - i - j;
      if(a[0] != 1 && a[2] == 2)
    {
      printf("A对战%c B对战%c C对战%c", b[a[0]], b[a[1]], b[a[2]]);
    }
    }
  }
  return 0;
}