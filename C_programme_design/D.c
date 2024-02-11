#include <stdio.h>
#include <string.h>
int ele[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, score1 = 0, score2 = 0, pre_hour = 0, pre_min = 0, pre_sec = 0;
int cost(int score1, int score2);
int period(int hour, int min, int sec, int pre_hour, int pre_min, int pre_sec);
int cases = 1;
int main()
{
  char event[50]; int h, m, s, rst = 0;
  while(scanf("%s", event) != -1)
  {
    if(strcmp(event, "START") == 0)
    {
      score1 = score2 = 0; rst = 0;
      scanf("%d:%d:%d", &pre_hour, &pre_min, &pre_sec);
      continue;
    }
    if(strcmp(event, "END") == 0)
    {
      scanf("%d:%d:%d", &h, &m, &s);
      rst += cost(score1, score2) * period(h, m, s, pre_hour, pre_min, pre_sec);
      printf("Case %d: %d\n", cases++, rst);
      continue;
    }
    scanf("%d:%d:%d", &h, &m, &s);
    rst += cost(score1, score2) * period(h, m, s, pre_hour, pre_min, pre_sec);
    pre_hour = h; pre_min = m; pre_sec = s;
    char side[10]; int add;
    scanf("%s%d", side, &add);
    if(strcmp(side, "home") == 0) score1 += add;
    if(strcmp(side, "guest") == 0) score2 += add;
  }
}

int cost(int score1, int score2)
{
  int rst = 0;
  while(score1 >= 10)
  {
    rst += ele[score1 % 10];
    score1 /= 10;
  }
  rst += ele[score1];
  while(score2 >= 10)
  {
    rst += ele[score2 % 10];
    score2 /= 10;
  }
  rst += ele[score2];
  return rst;
}

int period(int hour, int min, int sec, int pre_hour, int pre_min, int pre_sec)
{
  return hour *  3600 + min * 60 + sec - pre_hour * 3600 - pre_min * 60 - pre_sec;
}