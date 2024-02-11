#include <stdio.h>
#include <string.h>
char a[100];

int main()
{
  fgets(a, 99, stdin);
  int len = strlen(a);
  a[len - 1] = '\0';
  for(int i = 0; i < len; i++)
  {
    if(a[i] >= 'a' && a[i] <= 'z')
    {
      a[i] = 2 * 'a' + 25 - a[i];
    }
    if(a[i] >= 'A' && a[i] <= 'Z')
    {
      a[i] = 2 * 'A' + 25 - a[i];
    }
  }
  puts(a);
  return 0;
}