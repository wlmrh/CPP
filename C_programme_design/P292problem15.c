#include <stdio.h>
double score[5][6] = {0};char no[5][20], name[5][50]; 

double avg1()
{
  double sum = 0;
  for(int i = 1; i <= 4; i++)
  {
    sum += score[i][1];
  }
  return sum / 4;
}

void bad()
{
  for(int i = 1; i <= 4; i++)
  {
    int judge = 0; double sum = 0;
    for(int j = 1; j <= 5; j++)
    {
      sum += score[i][j];
      if(score[i][j] < 60) judge++;
    }
    if(judge > 2) 
    {
      printf("%s  ", no[i]);
      for(int j = 1; j <= 5; j++)
      {
        printf("%lf  ", score[i][j]);
      }
      printf("平均成绩为: %lf\n", sum / 5);
    }
  }
  printf("\n");
}

void good()
{
  for(int i = 1; i <= 4; i++)
  {
    int judge = 0; double sum = 0;
    for(int j = 1; j <= 5; j++)
    {
      sum += score[i][j];
      if(score[i][j] < 85)
      {
        judge = 1;
      }
    }
    if(sum > 450 || judge == 0)
    {
      printf("%s  %s\n", no[i], name[i]);
    }
  }
  printf("\n");
}

int main()
{
  double num; 
  for(int i = 1; i <= 4; i++)
  {
    scanf("%s %s %lf %lf %lf %lf %lf", no[i], name[i], &score[i][1], &score[i][2], &score[i][3], &score[i][4], &score[i][5]);
  }
  printf("\n第1门课程的平均分为:  %.2lf\n\n", avg1());
  printf("有两门以上不及格的学生有:\n");
  bad();
  printf("平均成绩在90分以上或全部课程在八十五分以上的学生有:\n");
  good();
  return 0;
}