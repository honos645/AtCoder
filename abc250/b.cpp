#include<iostream>

using namespace std;

int main(void) {
  int N, A, B;
  cin >> N >> A >> B;

  for(int i = 0; i < N; i++) {
    if(i % 2 == 0) {
      for(int l = 0; l < A; l++) {
        for(int j = 0; j < N; j++) {
          if(j % 2 == 0) {
            for(int k = 0; k < B; k++) {
              cout << ".";
            }
          }else {
            for(int k = 0; k < B; k++) {
              cout << "#";
            }
          }
        }
        cout << endl;
      }
    }else {
      for(int l = 0; l < A; l++) {
        for(int j = 0; j < N; j++) {
          if(j % 2 == 0) {
            for(int k = 0; k < B; k++) {
              cout << "#";
            }
          }else {
            for(int k = 0; k < B; k++) {
              cout << ".";
            }
          }
        }
        cout << endl;
      }
    }
  }



  return 0;
}