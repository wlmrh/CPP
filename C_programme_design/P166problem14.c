#include <stdio.h>
#include <string.h>
char s1[100], s2[100];
int cmp(char a, char b);

int main()
{
  fgets(s1, 99, stdin);
  fgets(s2, 99, stdin);
  int len1 = strlen(s1), len2 = strlen(s2);
  s1[len1 - 1] = '\0';
  s2[len2 - 1] = '\0';
  int i = 0, j = 0;
  while(s1[i] != '\0' && s2[i] != '\0')
  {
    int value = cmp(s1[i], s2[j]);
    if(value != 0) {printf("%d", value); return 0;}
    i++;
    j++;
  }
  printf("0");
  return 0;
}

int cmp(char a, char b)
{
  return a - b;
}