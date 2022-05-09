#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;

  int ans = 1;

  for(int i = 0; i < S.size(); i++) {
    if(i % 2 != 0) {
      if(S.at(i) == '+') {
        ans += 1;
      }else {
        ans -= 1;
      }
    }
  }

  cout << ans << endl;
}
