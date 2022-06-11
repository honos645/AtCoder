#include<algorithm>
#include<cmath>
#include<iostream>

using namespace std;

int main(void) {
  long long int X, A, D, N;
  cin >> X >> A >> D >> N;

  pair<long long int, long long int> sideNum = {A, A + (N - 1) * D};
  for(long long int i = 0; i  < N; i++) {
    long long int left = A + i * D;
    long long int right = A + (i + 1) * D;
    if(left <= X && X <= right) {
      sideNum.first = left;
      sideNum.second = right;
      break;
    }
  }

  pair<long long int, long long int> distance = {fabs(sideNum.first - X), fabs(sideNum.second - X)};
  if(distance.first >= distance.second) {
    cout << distance.second << endl;
  }else {
    cout << distance.first << endl;
  }

  return 0;
}