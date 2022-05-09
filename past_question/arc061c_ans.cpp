#include<iostream>
#include<string>

using namespace std;

int main() {
  string S;
  int N;
  cin >> S;
  N = S.length();
  
  long long ans = 0;
  for(int i = 00; i < 1 << (N - 1); i++) {
    long long sm = 0;
    long long a = S[0] - '0';
    for(int j = 0; j <  N - 1; j++) {
      if (i & (1 << j)) {
        sm += a;
        a = 0;
      }
      a = a * 10 + S[j + 1] - '0';
    }
    sm += a;
    ans += sm;
  }
  cout << ans << endl;

  return 0;
}