#include <bits/stdc++.h>
using namespace std;

bool judge(long long num)
{
  for(int i = 2; i * i <= num; i++)
  {
    if(num % i == 0)
    {
      num = num / i;
      if(num % i != 0) return false;
      num /= i;
      i--;
    }
  }
  if(num != 1ll) return false;
  return true;
}

int main()
{
  int n; cin >> n;
  while(n--)
  {
    int add; cin >> add;
    long long sum = 0;
    while(add--)
    {
      int num; cin >> num;
      sum += num;
    }
    if(judge(sum)) {cout << "YES" << '\n'; continue;}
    cout << "NO" << '\n';
  }
}