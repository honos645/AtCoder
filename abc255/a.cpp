#include<iostream>

using namespace std;

int main(void) {
  int R, C;
  cin >> R >> C;

  int A[2][2];
  cin >> A[0][0] >> A[0][1] >> A[1][0] >> A[1][1];

  cout << A[R - 1][C - 1] << endl;

  return 0;
}