#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long result[100005] = {0};
int opr_list[100005][4];
int crt[3];
long long add[100005] = {0};

int main()
{
  ios::sync_with_stdio(false);
  int n, m, k;
  cin >> n >> m >> k;
  for(int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  for(int i = 1; i <= m; i++)
  {
    cin >> opr_list[i][1] >> opr_list[i][2] >> opr_list[i][3];
  }
  //在统计每个操作的操作次数时也可以用Difference array
  for(int i = 1; i <= k; i++)
  {
    cin >> crt[1] >> crt[2];
    result[crt[1]]++;
    result[crt[2] + 1]--;
  }
  //retrieve1 恢复到每个操作执行的次数
  for(int i = 1; i <= m; i++)
  {
    result[i] = result[i - 1] + result[i];
  }
  //retrieve2 将操作次数恢复到加数差分数列
  for(int i = 1; i <= m; i++)
  {
    add[opr_list[i][1]] += result[i] * opr_list[i][3];
    add[opr_list[i][2] + 1] -= result[i] * opr_list[i][3];
  }
  //retrieve3 将差分数组恢复到加数，并与输出同步进行
  for(int i = 1; i <= n; i++)
  {
    add[i] += add[i - 1];
    cout << a[i] + add[i]<< " ";
  }
  return 0;
}