#include <stdio.h>
#include <string.h>
int list[100][100] = {0};
int mark[100][100] = {0};

int main()
{
  int l, clm, have_print = 0;
  scanf("%d", &l);
  scanf("%d", &clm);
  for(int i = 1; i <= l; i++)
  {
    for(int j = 1; j <= clm; j++)
    {
      scanf("%d", &list[i][j]);
    }
  }
  for(int i = 1; i <= l; i++)
  {
    int max = 0, flag = 0;
    int max_clm;
    for(int j = 1; j <= clm; j++)
    {
      if(max < list[i][j]) max = list[i][j];
      max_clm = j;
    }
    for(int x = 1; x <= l; x++)
    {
      if(list[x][max_clm] < max) {flag = 1; break;}
    }
    if(flag == 0) {printf("鞍点为第%d行第%d列的%d。\n", i, max_clm, max); have_print = 1;}
  }
  if(have_print == 0) printf("该数组中没有鞍点。");
  return 0;
}