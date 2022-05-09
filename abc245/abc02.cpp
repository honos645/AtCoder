#include<iostream>

using namespace std;

int main(void)
{
  int N = 0;
  int min = 0;

  cin >> N;
  
  int a[N];
  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < N; i++) {
    for(int j = i; j < N; j++) {
      if(a[i] > a[j]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  for(int  j = 0; j < N; j++) {
    for(int i = 0; i < a[N - 1]; i++) {
      if(min > a[j]) break;
      if(min < a[j]) {
        cout << min << endl;
        return 0;
      }
      min++;
    }
  }
  cout << a[N - 1] + 1 << endl;

  return 0;
}