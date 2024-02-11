#include <bits/stdc++.h>
using namespace std;
string str1, str2;
int KMP(string s1, string s2);
void back_build(string s, int length, vector<int> &list);

int main()
{
  cin >> str1 >> str2;
  int result = KMP(str1, str2);
  if(result == -1) cout << "无匹配字符串";
  else
  {
    cout << "匹配字符串的位置为：第" << result + 1<< "个";
  }
}

int KMP(string s1, string s2)
{
  int len1 = s1.length(), len2 = s2.length();
  if(len1 < len2) return -1;
  if(len2 == 0) return 1;
  vector<int> back;
  back_build(s2, len2, back);
  int pos1 = 0, pos2 = 0;
  while(pos1 < len1 && pos2 < len2)
  {
    if(pos2 == -1 || s1[pos1] == s2[pos2])
    {
      pos1++;
      pos2++;
      continue;
    }
    pos2 = back[pos2];
  }
  if(pos2 == len2) return pos1 - pos2;
  return -1;
}

void back_build(string s, int length, vector<int> &list)
{//-1是特殊标记,可换为其他数
  list.push_back(-1);
  list.push_back(0);
  for(int i = 2; i < length; i++)
  {
    if(s[i] == s[list[i - 1]]) {list.push_back(list[i - 1] + 1); continue;}
    int crt = list[i - 1];
    while(s[crt] != s[i])
    {
      crt = list[crt];
      if(crt == -1) break;
    }
    list.push_back(crt + 1);
  }
}