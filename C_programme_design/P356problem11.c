#include <stdio.h>
#include <string.h>

int main()
{
  char sentence[30]; char doc[50];
  scanf("%s", doc);
  FILE *fp;
  if((fp = fopen("doc", "w+")) == NULL)
  {
    printf("error");
    exit(0);
  }
  while(scanf("%s", sentence) != NULL)
  {
    fprintf(fp, "%s\n", sentence);
  }
  fclose(fp);
  if((fp = fopen("doc", "r")) == NULL)
  {
    printf("error");
    exit(0);
  }
  while(fscanf(fp, "%s", sentence) != EOF)
  {
    printf("%s\n", sentence);
  }
  return 0;
}