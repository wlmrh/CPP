#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 0, initial = 1, value = 1;
  cin >> n;
  int a[n + 1][n + 1], x, y;
  memset(a, 0, sizeof(a));
  a[x = 1][y = n] = 1;
  while(value < n*n)
  {
    while(x < n && !a[x + 1][y])  a[++x][y] = ++value;
    while(y > 1 && !a[x][y - 1])  a[x][--y] = ++value;
    while(x > 1 && !a[x - 1][y])  a[--x][y] = ++value;
    while(y < n && !a[x][y + 1])  a[x][++y] = ++value;
  }
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= n; j++)
    {
      printf("%3d", a[i][j]);
    }
    cout << endl;
  }
}