#include<iostream>

using namespace std;

int main(void)
{
  int n, a, b;
  int total = 0;

  cin >> n >> a >> b;

  for(int i = a; i < n + 1; i++) {
    int tmp = i;
    int sum = 0;
    while(tmp > 0) {
      sum += tmp % 10;
      tmp /= 10;
    }
    if(a <= sum && sum <= b) {
      total += i;
    }
  }
  cout << total << endl;

  return 0;
}