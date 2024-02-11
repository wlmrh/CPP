#include <stdio.h>
int score[11][6], sum = 0, max = 0, max_line, max_col;
double average[11], class_avg[6];
//average存储个人平均分，class_avg存储课程平均分，max_line,max_col分别存储最大分数所对应的行和列
int main()
{
  for(int i = 1; i <= 10; i++)
  {
    for(int j = 1; j <= 5; j++)
    {
      scanf("%d", &score[i][j]);
      sum += score[i][j];
      class_avg[j] += score[i][j];
      if(max < score[i][j])
      {
        max = score[i][j]; max_line = i; max_col = j;
      }
    }
    average[i] = 1ll * sum / 5;
    sum = 0;
  }
  for(int i = 1; i <= 5; i++) class_avg[i] /= 10;

  printf("十个学生的平均分分别为：");
  for(int i = 1; i <= 10; i++)
  {
    printf("%.1lf ", average[i]);
  }
  printf("\n");
  printf("五门课的平均分分别为：");
  for(int i = 1; i <= 5; i++)
  {
    printf("%.1lf ", class_avg[i]);
  }
  printf("\n");
  printf("最高分对应的学生和课程分别为：");
  printf("学生%d、课程%d", max_line, max_col);
  printf("\n");
  //
  double avg = 0, sqr_avg = 0;
  for(int i = 1; i <= 10; i++)
  {
    avg += average[i];
    sqr_avg += average[i] * average[i];
  }
  avg /= 10; sqr_avg /= 10;
  printf("平均分方差为：");
  printf("%.1lf", sqr_avg - avg * avg);
}