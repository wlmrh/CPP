#include <bits/stdc++.h>
using namespace std;


void swap(int a, int b);
void shift_down(int a);
int len, record;
int h[10005];


int main()
{
  //输入数据
  cin >> len;
  for(int i = 1; i <= len; i++)
  {
    cin >> h[i];
  }
  //找到倒数第二行中最右边数的的下标
  for(int i = 1; i <= len; i = 2 * i + 1)
  {
    record = i;
  }
  //调顺序
  for(int i = record; i >= 1; i--)
  {
    shift_down(i);
  }
  //输出结果
  for(int i = 1; i <= len; i++)
  {
    printf("%d ", h[i]);
  }
  return 0;
}

void shift_down(int i)
{
  if(i * 2 <= len)
  {
    if(i * 2 + 1 <= len)
    {
      int min;
      if(h[i] > h[2 * i] && h[2 * i] < h[2 * i + 1])
      {
        min = 2 * i;
      }
      if(h[i] > h[2 * i + 1] && h[2 * i] > h[2 * i + 1])
      {
        min = 2 * i + 1;
      }
      if(min != i)
      {
        swap(i, min);
      }
      shift_down(min);
    }
    if(i * 2 == len)
    {
      if(h[i] > h[2 * i])
      {
        swap(i, 2 * i);
      }
    }
  }
}



void swap(int a, int b)
{
  int t = h[a];
  h[a] = h[b];
  h[b] = t;
}