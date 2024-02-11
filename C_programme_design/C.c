#include <stdio.h>
#include <math.h>
int numtopower[10] = {0, 1, 8, 7, 4, 5, 6, 3, 2, 9};
int powertonum[10] = {0, 1, 8, 7, 4, 5, 6, 3, 2, 9}; int cases = 1;
int find_min_mod(int bound,int rmn);

int main()
{
  int min, max;
  while((scanf("%d %d", &min, &max)) != EOF)
  {
    int rst = 0;
    for(int i = 0; i < 10 && min + i <= max; i++)
    {
      int srt1 = min + i;
      int srt2 = find_min_mod(min, powertonum[(3 - (int)pow(srt1 % 10, 3) % 10) >= 0? (3 - (int)pow(srt1 % 10, 3) % 10) : (13 - (int)pow(srt1 % 10, 3) % 10)]);int srt3 = srt2;
      while(srt1 <= max)
      {
        if((int)pow(srt1, 3) >= 10 * max + 3) break;
        srt2 = srt3;
        while(srt2 <= max)
        {
          int num = (int)pow(srt1, 3) + (int)pow(srt2, 3);
          if(num >= min * 10 + 3)
          {
            if(num <= max * 10 + 3)
            {
              rst++;
            }
            else break;
            srt2 += 10;
          }
        }
        srt1 += 10;
      }
    }
    printf("Case %d: %d\n", cases++, rst);
  }
}

int find_min_mod(int bound,int rmn)
{
  while(bound % 10 != rmn)
  {
    bound++;
  }
  return bound;
}