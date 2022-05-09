#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void) {
  int Q;
  cin >> Q;
  vector<pair<long long, long long>> que;
  vector<long long> query;

  for(int i = 0; i < Q; i++) {
    int q;
    cin >> q;
    if(q == 1) {
      int x, c;
      cin >> x >> c;
      que.push_back(make_pair(x, c));
    }else {
      int c;
      cin >> c;
      query.push_back(c);
    }
  }

  for(int i = 0; i < query.size(); i++) {
    int k = 0;
    long long ans = 0;
    while(query.at(i)){
      if(que.at(k).second == 0) k++;
      long long tmp = min(query.at(i), que.at(k).second);
      ans += tmp * que.at(k).first;
      que.at(k).second -= tmp;
      query.at(i) -= tmp;
    }
    cout << ans << endl;
  }
  return 0;
}