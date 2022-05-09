#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void) {
  long long N;
  cin >> N;

  int A[N];
  for(int i = 0; i < N; i++) {
    int tmp;
    cin >> A[i];
  }

  //printf("(i,j,k)\n");

  int cnt = 0;
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      for(int k = 0; k < N; k++) {
        if(A[i] == A[k] * A[j]) {
          cnt += 1;
          cout << "\t";
        }
        //printf("(%d,%d,%d)\n", i + 1, j + 1, k + 1);
      }
    }
  }

  cout << cnt << endl;



  return 0;
}