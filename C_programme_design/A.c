#include <stdio.h>
#include <string.h>
#include <math.h>
int orders[101];
int main()
{
  int days; scanf("%d", &days);
  while(days--)
  {
    int steps, place = 0; scanf("%d", &steps);
    getchar();
    for(int i = 0; i < steps; i++)
    {
      char order[20];
      fgets(order, 20, stdin); order[strlen(order) - 1] = '\0';
      if(strcmp(order, "LEFT") == 0)
      {
        place--;
        orders[i + 1] = -1;
      }
      else if(strcmp(order, "RIGHT") == 0)
      {
        place++;
        orders[i + 1] = 1;
      }
      else
      {
        int num = 0;
        for(int i = strlen(order) - 1; order[i] != ' '; i--)
        {
          num += (order[i] - '0') * pow(10, (strlen(order) - 1 - i));
        }
        orders[i + 1] = orders[num];
        place += orders[num];
      }
    }
    if(days != 0) printf("%d\n", place);
    else printf("%d", place);
  }
}