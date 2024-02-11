#include <bits/stdc++.h>
using namespace std;
int vol[200005];

int main()
{
  //两人需要喝的酒杯一样多或者差一瓶
  int t; cin >> t;
  while(t--)
  {
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
      cin >> vol[i];
    }
  }
}