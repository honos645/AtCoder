#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void) {
  long long int N, Q, L ,R, X;
  vector<int> A;
  cin >> N;

  for(int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    A.push_back(tmp);
  }

  cin >> Q;
  for(int i = 0; i < Q; i++) {
    int count = 0;
    cin >> L >> R >> X;
    for(int j = L - 1; j < R; j++) {
      if(A.at(j) == X) count++;
    }
    cout << count << endl;
  }
  return 0;
}