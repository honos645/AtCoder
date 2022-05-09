#include<iostream>
#include<vector>

using namespace std;

int main(void) {
  long long N, Q;
  cin >> N >> Q;

  int a[N];
  for(int i = 0; i < N; i++) {
    a[i] = i + 1;
  }

  for(int i = 0; i < Q; i++) {
    int tmp, x;
    cin >> x;
    for(int j = 0; j < N; j++) {
      if(x == a[j]) {
        if(j == N - 1) {
          tmp = a[j];
          a[j] = a[j - 1];
          a[j - 1] = tmp;
          break;
        }else {
          tmp = a[j];
          a[j] = a[j + 1];
          a[j + 1] = tmp;
          break;
        }
      }
    }
  }

  for(int j = 0; j < N; j++) {
    cout << a[j] << " ";
  }
  cout << endl;
  return 0;
}