#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int alpha[26] = {0};//字母出现的个数
int num[30];//每种数字出现的个数

int main()
{
  int days = 1, wrd;
  while(scanf("%d", &wrd) != EOF)
  {
    int rst = 0, words = wrd;
    while(words--)
    {
      char word[31];
      scanf("%s", word);
      //if(word[strlen(word) - 1] == '\n') word[strlen(word) - 1] = '\0';
      //if(word[strlen(word) - 1] == EOF) break;
      if(strlen(word) == 1) {rst++; continue;}
      memset(alpha, 0, 26 * sizeof(int)); memset(num, 0, 30 * sizeof(int));
      int i;
      for(i = 0; i < strlen(word); i++)
      {
        alpha[word[i] - 'a']++;
      }
      if(alpha[word[i - 1] - 'a'] == strlen(word)) {rst++; continue;}
      for(int j = 0; j < 26; j++)
      {
        if(alpha[j] != 0 && num[alpha[j]] == 1) {rst++; break;}
        num[alpha[j]]++;
      }
    }
    printf("Case %d: %d\n", days++, wrd - rst);
  }
  return 0;
}
