#include <bits/stdc++.h>
using namespace std;

typedef struct{
  int srt, end;
}peo;
peo people[200005];

bool cmp(peo p1, peo p2)
{
  return p1.end < p2.end;
}

int main()
{
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while(t--)
  {
    long long rst = 0;
    int p; cin >> p;
    for(int i = 0; i < p; i++)
    {
      cin >> people[i].srt >> people[i].end;
    }
    sort(people, people + p, cmp);
    for(int i = 0; i < p; i++)
    {
      for(int j = i + 1; j < p; j++)
      {
        if((people[i].srt - people[j].srt) > 0) rst++;
      }
    }
    cout << rst << '\n';
  }
}