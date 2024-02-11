#include <bits/stdc++.h>
using namespace std;
vector<int> list(200005);
vector<int> judge(200005);
int n, rst; 

int main()
{
  int t; cin >> t;
  while(t--)
  {
    cin >> n;
    solve(n);
  }
}

void solve(int num)
{
  for(int i = 1; i <= num; i++) cin >> list[num];
  for(int i = 2; i <= num; i++)
  {
    int judge = 1;
    if(list[num])
  }
}