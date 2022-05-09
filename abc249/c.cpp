#include<algorithm>
#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

int main(void) {
  int N, K;
  cin >> N >> K;
  vector<string> S;
  
  for(int i = 0; i < N; i++) {
    string tmp;
    cin >> tmp;
    S.push_back(tmp);
  }

  int MAX = 0;
  for(int bit = 0; bit < (1 << N); bit++) {
    map<char, int> cnt;
    int max0 = 0;
    for(int i = 0; i< N; i++) {
      if(bit & (1 << i)) {
        for(int j = 0; j < S.at(i).size(); j++) {
          cnt[S.at(i).at(j)]++;
        }
      }

    }
    for(auto tmp = cnt.begin(); tmp != cnt.end(); tmp++) {
      if(tmp->second == K) max0++;
    }
    MAX = max(MAX, max0);
  }
  
  cout << MAX<< endl;
  return 0;
}
