#include <bits/stdc++.h>
using namespace std;
char table[3][3];

bool isexist(int line, char find)
{
  for(int i = 0; i < 3; i++)
  {
    if(table[line][i] == find) return true;
  }
  return false;
}

int main()
{
  int n, line; cin >> n;
  while(n--)
  {
    for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < 3; j++)
      {
        char crt; 
        cin >> crt;
        if(crt == '?') line = i;
        table[i][j] = crt;
      }
    }
    if(!isexist(line, 'A')) {cout << 'A' << '\n'; continue;}
    if(!isexist(line, 'B')) {cout << 'B' << '\n'; continue;}
    cout << 'C' << '\n';
  }
}