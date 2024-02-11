#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char name[11][30];
long long num[11];
void sort(char nm[][30], long long *no, int srt, int end);

int binary_search(long long);

int main()
{
  for(int i = 1; i <= 10; i++)
  {
    scanf("%s", name[i]);
    scanf("%lld", &num[i]);
  }
  sort(name, num, 1, 10);
  long long srh; scanf("%lld", &srh);
  printf("该职工的姓名为：%s", name[binary_search(srh)]);
}

void sort(char nm[][30], long long *no, int srt, int end)
{
  int p1 = srt, p2 = end;
  long long mid = no[p1];
  while(p1 != p2)
  {
    while(no[p2] >= mid && p1 != p2) p2--;
    if(p1 != p2)
    {
      int inter = no[p1]; no[p1] = no[p2]; no[p2] = inter;
      char arr[30]; strcpy(arr, nm[p1]); strcpy(nm[p1], nm[p2]); strcpy(nm[p2], arr);
    }
    while(no[p1] <= mid && p1 != p2) p1++;
    if(p1 != p2)
    {
      int inter = no[p1]; no[p1] = no[p2]; no[p2] = inter;
      char arr[30]; strcpy(arr, nm[p1]); strcpy(nm[p1], nm[p2]); strcpy(nm[p2], arr);
    }
  }
  if(p1 != 1) sort(nm, no, 1, p1 - 1);
  if(p1 != end) sort(nm, no, p1 + 1, end);
}

int binary_search(long long no)
{
  long long l = 1, r = 10, mid;
  while(1)
  {
    mid = (l + r) / 2;
    if(num[mid] == no) return mid;
    if(num[mid] > no) r = mid - 1;
    if(num[mid] < no) l = mid + 1;
  }
}