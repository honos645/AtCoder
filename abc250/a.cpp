#include<iostream>

using namespace std;

int main (void) {
  int R, H, C, W;
  int ans = 0;
  cin >> H >> W >> R >> C;

  if(R + 1 <= H) ans += 1;
  if(R - 1 >= 1) ans += 1;
  if(C + 1 <= W) ans += 1;
  if(C - 1 >= 1) ans += 1;

  cout << ans << endl;

  return 0;
}