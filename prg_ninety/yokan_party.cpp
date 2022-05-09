#include<iostream>
#include<algorithm>

using namespace std;

int main(void) {
  int N, L, K;
  cin >> N >> L >> K;

  int cut[N];
  for(int i = 0; i < N; i++) {
    cin >> cut[i];
  }
  
  int choice = 1;
  int score = 0;
  for(int bit = 0; bit < (1 << N); bit++) {
    for(int i = 0; i < 3; i++) {
      if(bit & 1 << i) {
        cout << "+";
      }
      cout << cut[i];
    }
    cout << endl;
  }

  cout << N << " : " << (1 << N) << "  " << (1 << N - 2) << endl;

/*
  cout << score << endl;
  for(int i = 0; i <= N; i++) {
    cout << cut[i] << " ";
  }
  cout << endl;
*/
  return 0;
}