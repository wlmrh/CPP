#include <stdio.h>
#include <stdlib.h>
int n = 13;//总人数
typedef struct Node{
  int no;
  struct Node *next;
}node;

node *loop_create()
{
  node *rst = (node *)malloc(sizeof(node)); rst->no = 1; node *crt = rst;
  for(int i = 0; i < n - 1; i++)
  {
    node *newnode = (node *)malloc(sizeof(node));
    newnode->no = i + 2; newnode->next = NULL;
    crt->next = newnode; crt = crt->next;
  }
  crt->next = rst;
  return rst;
}

int main()
{
  node *srt = loop_create(); node *crt = srt;
  n--;
  while(n != 1)
  {
    node *mind = crt->next->next->next;
    free(crt->next->next);
    crt->next->next = mind;
    crt = crt->next->next;
    n--;
  }
  printf("余下的人的编号为：%d", crt->next->no);
  free(crt->next); free(crt);
  return 0;
}