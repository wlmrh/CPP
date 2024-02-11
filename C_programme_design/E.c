#include <stdio.h>
int digit = 0;
void change(int num, char *rst);

int main()
{
  char rst[30];
  int n;
  while(scanf("%d", &n) != -1)
  {
    change(n, rst);
    printf("%d ", digit);
    for(int i = digit - 1; i >= 0; i--)
    {
      printf("%c", rst[i]);
    }
    printf("\n");
  }
  return 0;
}

void change(int num, char *rst)
{
  int pos = 0;
  while(num != 0)
  {
    rst[pos++] = num % 2 + '0';
    num /= 2;
    digit++;
  }
}