#include<iostream>

#define D 998244353

using namespace std;

int main(void) {
  long long int N;

  cin >> N;

  N = N % D;
  if(N >= 0) {
  cout << N << endl;
  }else {
  cout << (D + N) << endl;

  }
  return 0;
}