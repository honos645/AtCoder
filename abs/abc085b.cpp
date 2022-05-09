#include<iostream>

using namespace std;

int main(void)
{
  int N = 0;

  cin >> N;
  int d[N];
  
  for(int i = 0; i < N; i++) {
    cin >> d[i];
  }

  for(int i = 0; i < N; i++) {
    for(int j = i + 1; j < N; j++) {
      if(d[i] < d[j]) {
        int temp = d[i];
        d[i] = d[j];
        d[j] = temp;
      }
    }
  }

  int cnt = 1;
  for(int i = 0; i < N - 1; i++) {
    if(d[i] > d[i + 1]) {
      cnt++;
    }
  }

  cout << cnt << endl;

  return 0;


}