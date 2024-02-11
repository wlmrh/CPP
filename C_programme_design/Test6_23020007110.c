#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int a[100000] = {0};
void bubble_sort(int* b, int len);
void quick_sort(int* b, int len);

int main()
{
  int n;
  scanf("%d", &n);
  clock_t start, finish;
  srand(time(NULL));
  for(int i = 0; i < 100000; i++)
  {
    a[i] = rand();
  }
  start = clock();
  //bubble_sort(a, n);
  quick_sort(a, n);
  finish = clock();
  printf("程序运行时长：%lfs", (double) (finish - start) / CLOCKS_PER_SEC);
  return 0;
}

void quick_sort(int* b, int len)
{
  if(len <= 1) return;
  int crt = 0, l = 0, r = len - 1, inter;
  while(l < r)
  {
    while(b[r] >= b[crt] && r >= 0) r--;
    if(r < l) break;
    inter = b[r];
    b[r] = b[crt];
    b[crt] = inter;
    crt = r;
    while(b[l] <= b[crt] && l <= len) l++;
    if(r < l) break;
    inter = b[l];
    b[l] = b[crt];
    b[crt] = inter;
    crt = l;
  }
  quick_sort(b, crt);
  quick_sort(b + crt + 1, len - crt - 1);
}

void bubble_sort(int* b, int len)
{
  for(int i = len - 2; i >= 0; i--)
  {
    for(int j = 0; j <= i; j++)
    {
      if(b[j] > b[j + 1]) {int c = b[j]; b[j] = b[j + 1]; b[j + 1] = c;}
    }
  }
}