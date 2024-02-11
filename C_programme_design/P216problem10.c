#include <stdio.h>
#include <string.h>
char sentence[200];
char ans[100] = {0};
int maxlen = 0;
void solve(char* a, char* b);

int main()
{
  fgets(sentence, 199, stdin);
  sentence[strlen(sentence) - 1] = '\0';
  solve(sentence, ans);
  ans[maxlen] = '\0';
  printf("%s", ans);
  return 0;
}

void solve(char* a, char* b)
{
  int crt = 0, crt_len = 0;
  char crt_wrd[100];
  for(int i = 0; i <= strlen(a); i++)
  {
    if(a[i] != ' ' && a[i] != '\0')
    {
      crt_len++;
      crt_wrd[crt++] = a[i];
      continue;
    }
    if(crt_len > maxlen) {maxlen = crt_len; crt_wrd[crt_len] = '\0'; strcpy(ans, crt_wrd);}
    crt = 0; crt_len = 0;
  }
}