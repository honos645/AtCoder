#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void) {
  long long int N, M, T;

  cin >> N >> M >> T;
  vector<long long int> A(N - 1);
  vector<pair<long long int, long long int>> X(M);

  for(int i = 0; i < N - 1; i++) {
    cin >> A.at(i);
  }
  for(int i = 0; i < M; i++) {
    cin >> X.at(i).first >> X.at(i).second;
  }

  // cout << "持ち時間:" << T << "\t部屋:" << 1 << endl;
  for(int i = 0, j = 0; i < N - 1; i++) {
    T -= A.at(i);
    if(T <= 0) break;

    if(j < X.size() && i + 2 == X.at(j).first) {
      T += X.at(j).second;
      j++;
    }
    // cout << "持ち時間:" << T << "\t部屋:" << i + 2 << endl;
  }

  if(T > 0) {
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }

  return 0;
}