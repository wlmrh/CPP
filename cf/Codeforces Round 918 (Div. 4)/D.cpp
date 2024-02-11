#include <bits/stdc++.h>
using namespace std;
char word[4], ans[4];

int main()
{
  int n; cin >> n;
  while(n--)
  {
    int len, pos = 0; cin >> len;
    for(int i = 0; i < len; i++)
    {
      char crt; cin >> crt;
      ans[pos] = crt;
      if(crt == 'a' || crt == 'e') word[pos++] = 'V';
      else word[pos++] = 'C';
      if(pos == 4)
      {
        if(word[2] == word[3])
        {
          cout << ans[0] << ans[1] << ans[2] << '.';
          word[0] = word[3];
          ans[0] = ans[3];
          pos = 1;
        }
        else if(word[2] != word[3])
        {
          cout << ans[0] << ans[1] << '.';
          word[0] = word[2]; word[1] = word[3];
          ans[0] = ans[2]; ans[1] = ans[3];
          pos = 2;
        }
      }
    }
    for(int i = 0; i < pos; i++)
    {
      cout << ans[i];
    }
    cout << '\n';
  }
}