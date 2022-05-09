#include<iostream>
#include<string>

using namespace std;

int main(void) {
  long long int A, B, K;
  cin >> A >> B >> K;

  long long int ans = A;
    int count = 0;
  while(ans < B) {
    ans *= K;
    count++;
  }

  cout << count << endl;

  return 0;
}