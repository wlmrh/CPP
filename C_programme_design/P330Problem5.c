#include <stdio.h>

typedef struct {
  long long no;
  char name[20];
  int class1, class2, class3, sum;
} Stu;

Stu stu[10];
int n;

float average1() {
  float sum = 0;
  for (int i = 0; i < n; i++) {
    sum += stu[i].class1;
  }
  return sum / n;
}

float average2() {
  float sum = 0;
  for (int i = 0; i < n; i++) {
    sum += stu[i].class2;
  }
  return sum / n;
}

float average3() {
  float sum = 0;
  for (int i = 0; i < n; i++) {
    sum += stu[i].class3;
  }
  return sum / n;
}

void high_print() {
  int maxpos = 0;
  for (int i = 1; i < n; i++) {
    if (stu[i].sum > stu[maxpos].sum)
      maxpos = i;
  }
  printf("最高分学生的数据为：\n学号：%lld  姓名：%s\n三门课程成绩分别为：%d  %d  %d",
         stu[maxpos].no, stu[maxpos].name, stu[maxpos].class1, stu[maxpos].class2, stu[maxpos].class3);
}

int main() {
  scanf("%d", &n);  // 输入人数
  getchar();
  for (int i = 0; i < n; i++) {
    scanf("%lld %s %d %d %d", &stu[i].no, stu[i].name, &stu[i].class1, &stu[i].class2, &stu[i].class3);
    stu[i].sum = stu[i].class1 + stu[i].class2 + stu[i].class3;
  }
  printf("三门课程平均分分别为：%.1f  %.1f  %.1f\n", average1(), average2(), average3());
  high_print();
  return 0;
}