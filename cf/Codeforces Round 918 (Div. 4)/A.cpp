#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n; cin >> n;
  while(n--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b)
    {
      cout << c << '\n';
      continue;
    }
    if(a == c)
    {
      cout << b << '\n';
      continue;
    }
    cout << a << '\n';
  }
}