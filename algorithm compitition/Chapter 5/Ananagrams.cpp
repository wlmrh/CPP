#include <bits/stdc++.h>
using namespace std;

set<string> backup;
set<string> change;
long long alpha_record[1000] = {0};
string input1;
string input2;
bool judge[1000];

int main()
{
  int crt = 0;
  while(cin >> input1)
  {
    if(input1 == "#") break;
    backup.insert(input1);
    for(int i = 0 ; i < input1.length() ; i++)
    {
      if(isalpha(input1[i])) input1[i] = tolower(input1[i]);
      alpha_record[crt] += (1 << (input1.length() - 1));
    }
    crt++;
  }
  
}