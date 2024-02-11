#include <stdio.h>
#include <string.h>
int no = 0, num[1000]; char str[1000];

int main()
{
  fgets(str, 999, stdin); str[strlen(str) - 1] = '\0';
  char crt; int value = 0, pos = 0;
  for(int i = 0; i < strlen(str); i++)
  {
    if(str[i] >= '0' && str[i] <= '9') value = value * 10 + str[i] - '0';
    else
    {
      if(value != 0) {num[pos++] = value; value = 0; no++;}
    }
  }
  if(value != 0) {num[pos++] = value; value = 0; no++;}
  printf("共有%d个整数:\n", no);
  for(int i = 0; i < no; i++) printf("%d ", num[i]);
}