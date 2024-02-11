#include <bits/stdc++.h>
using namespace std;
int arr[21] = {0};

int main()
{
  ios::sync_with_stdio(false); cin.tie(0);
  int t; cin >> t;
  while(t--)
  {
    int start = 3, end = 4, flag = 0;
    int n, rubbish; cin >> n >> arr[1]; 
    if(n == 1) {cout << "YES\n"; continue;}
    if(n == 2) {cout << "YES\n"; cin >> rubbish; continue;}//此处rubbish存储不需要检验的第一项,值没有实际作用
    cin >> arr[2]; 
    for(int i = 3; i <= n; i++)
    {
      cin >> arr[i];
      
    }
    for(int i = 3; i <= n; i++)
    {
      if(i == end + 1)
      {
        start = (start - 1) * 2 + 1; end *= 2;
      }
      if(i != start)
      {
        if(arr[i] < arr[i - 1]) {cout << "NO\n"; flag = 1; break;}
      }
    }
    if(flag == 0) cout << "YES\n";
  }
}