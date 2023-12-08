#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(void) {
  int N;
  vector<pair<int, int>> price = {make_pair(0, 6), make_pair(0, 8), make_pair(0, 12)};
  cin >> N >> price.at(0).first >> price.at(1).first >> price.at(2).first;

  vector<int> egg(N + 1, 0x7fffffff);
  egg.at(0) = 0;
  int ans = 0x7fffffff;
  sort(price.begin(), price.end());

  for (int i = 0; i < egg.size(); i++) {
    for (int j = 0; j < price.size(); j++) {
      if(egg.at(i) == 0x7fffffff) continue;
      if(i + price.at(j).second >= N) {
        ans = min(ans, egg.at(i) + price.at(j).first);
        // cout << ans << " or " << egg.at(i) + price.at(j).first << endl;
        break;
      }
      // cout << "i:" << i << "\tn:" << i + price.at(j).second << endl;
      egg.at(i + price.at(j).second) = min(egg.at(i + price.at(j).second), egg.at(i) + price.at(j).first);
    }
  }

  // for (int i = 0; i < egg.size(); i++ ) {
    // cout << "i:" << i << "\tprice:" << egg.at(i) << endl;
  // }
  cout << ans << endl;

  return 0;
}