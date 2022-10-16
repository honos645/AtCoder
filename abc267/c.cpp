#include<iostream>
#include<vector>

using namespace std;

int main(void) {
  int N, M;
  cin >> N >> M;

  vector<int> A(N + 1);
  for (int i = 1; i < N + 1; i++) {
    cin >> A.at(i);
  }

  long long int ans = 0;
  int start = 1;
  int end = start + M - 1;

  while(end < A.size()) {
    end = start + M;
    long long int temp = 0;
    for (int i = start, j = 1; i < end; i++, j++) {
      temp += j * A.at(i);
    }
    if(ans < temp) ans = temp;
    start++;
  }

  cout << ans << endl;

  return 0;
}