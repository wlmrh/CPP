#include <bits/stdc++.h>
using namespace std;

bool situation[11][10] = {{0}};

int main()
{
  int red_piece = 0;
  char deck[11][10] = {{'0'}};
  while(1)
  {
    int general_x = 0, general_y = 0;
    cin >> red_piece >> general_x >> general_y;
    if(red_piece == general_x && general_x == general_y && red_piece == 0) break;
    deck[general_x][general_y] = 1;
    char type;
    int x, y;
    while(red_piece--)
    {
      cin >> type >> x >> y;
      deck[x][y] = type;
      if(type == 'G')
      {
        memset(situation[x], 1, 10);
        for(int i = 0; i <= )
      }
    }
  }
}