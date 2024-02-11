#include <stdio.h>
char a[100];

int main()
{
  fgets(a, 100, stdin);
  int words = 0, i = 0, space = 0;
  while(a[i] != '\0')
  {
    if(a[i] == ' ') space = 1;
    if((a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z') && space == 1)
    {
      words++;
      space = 0;
    }
    i++;
  }
  printf("%d", words);
  return 0;
}