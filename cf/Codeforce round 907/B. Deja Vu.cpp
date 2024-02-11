#include <bits/stdc++.h>
using namespace std;
int pows(int num);

#define re register
#define il inline
il int read()
{
    re int x=0,f=1;char c=getchar();
    while(c<'0'||c>'9'){if(c=='-') f=-1;c=getchar();}
    while(c>='0'&&c<='9') x=(x<<3)+(x<<1)+(c^48),c=getchar();
    return x*f;
}

int main()
{
  int t; t = read();
  while(t--)
  {
    int n, q; n = read(), q = read();
    int num[n + 1], opr, power[n + 1] = {0};
    for(int i = 1; i <= n; i++)
    {
      num[i] = read();
      power[i] = pows(num[i]);
    }
    for(int j = 1; j <= q; j++)
    {
      opr = read();
      for(int i = 1; i <= n; i++)
      {
        if(opr <= power[i]) {power[i] = opr - 1; num[i] += pow(2, opr - 1);}
      }
    }
    for(int i = 1; i <= n - 1; i++)
    {
      printf("%d ", num[i]);
    }
    printf("%d\n", num[n]);
  }
}

int pows(int num)
{
  int ini = 0;
  while(num % 2 == 0)
  {
    ini++;
    num /= 2;
  }
  return ini;
}