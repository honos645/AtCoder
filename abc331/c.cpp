#include<bits/stdc++.h>
using namespace std;

int main(void) {
  long long N;
  cin >> N;
  vector<pair<long long, long long>> A(N, make_pair(0, 0));
  vector<long long> ans(N, 0);
  for(long long i = 0; i < N; i++) {
    cin >> A.at(i).first;
    A.at(i).second = i;
  }

  sort(A.rbegin(), A.rend());

  long long answ = A.at(0).first;
  for(long long i = 1; i < N; i++) {
    if(A.at(i).first == A.at(i - 1).first) {
      ans.at(A.at(i).second) = ans.at(A.at(i - 1).second);
    }else{
      ans.at(A.at(i).second) = answ;
    }
    answ += A.at(i).first;
  }

  for(long long i: ans) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}