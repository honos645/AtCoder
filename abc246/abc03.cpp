#include<iostream>

using namespace std;

int main(void)
{
  int N, K, X, sum = 0;
  cin >> N >> K >> X;
  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
    while(K > 0 && a[i] >= X) {
      a[i] -= X;
      K--;
    }
  }

  for(int x: a) {
    sum += x;
  }

  cout << sum << endl;

  return 0;
}