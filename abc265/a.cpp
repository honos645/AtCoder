#include<iostream>

using namespace std;

int main(void) {
  int X, Y, N;

  cin >> X >> Y >> N;

  int ans = X * N;

  for (int i = N, j = 0; i >= 0; i -= 3, j++) {
    int tmp = X * i + Y * j;
    if(tmp < ans) ans = tmp;
  }
    cout << ans << endl;

  return 0;
}