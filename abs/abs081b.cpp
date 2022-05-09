#include<iostream>

using namespace std;

int main(void)
{
  int cnt = 0;
  int n = 0;
  cin >> n;

  int A[n];
  for(int i = 0; i < n; i++) {
    cin >> A[i];
  }

  do {
    for(int i = 0; i < n; i++) {
    if(A[i] % 2 == 0) {
      A[i] /= 2;
    }else {
      cout << cnt << endl;
      return 0;
    }
    }
  cnt++;
  }while(true);

  return 0;
}