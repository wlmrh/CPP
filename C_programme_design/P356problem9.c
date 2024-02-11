#include <stdio.h>

int main()
{
  FILE *fp, *fp1;
  if((fp = fopen("employee", "r")) == NULL)
  {
    printf("error");
    exit(0);
  }//打开文件
  if((fp = fopen("salary", "w+")) == NULL)
  {
    printf("error");
    exit(0);
  }
  char name[20]; int salary;
  while(fscanf(fp, "%s%*lld%*s%*d%*s%d%*s%*s", name, &salary) != EOF)
  {
    fprintf(fp1, "%s\t%d\n", name, salary);
  }
  fclose(fp); fclose(fp1);
}