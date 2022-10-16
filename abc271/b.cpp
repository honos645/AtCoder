#include<iostream>
#include<vector>
using namespace std;

int main(void) {
  int N, Q;
  cin >> N >> Q;

  vector<vector<int>> L(N);
  vector<int> ans(Q);

  for (int i = 0; i < N; i++) {
    int temp;
    cin >> temp;

    for (int j = 0; j < temp; j++) {
      int tmp;
      cin >> tmp;
      L.at(i).push_back(tmp);
    }
  }

  for (int i = 0; i < Q; i++) {
    int s, t;
    cin >> s >> t;
    ans.at(i) = L.at(s - 1).at(t - 1);
  }

  for (int i = 0; i < ans.size(); i++) {
    cout << ans.at(i) << endl;
  }

  return 0;
}