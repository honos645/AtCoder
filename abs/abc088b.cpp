#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
  int N;
  int sum = 0;

  cin >> N;

  int a[N];
  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  sort(a, a+ N, greater<int>());
  for(int i = 0; i < N; i++) {
    if(i % 2 == 0) {
      sum += a[i];
    }else {
      sum -= a[i];
    }
  }
  cout << sum << endl;

  return 0;
}