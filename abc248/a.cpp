#include<iostream>
#include<string>

#define N 10

using namespace std;


int main(void) {
  string str;
  int bit[N];
  cin >> str;

  for(int i = 0; i < N; i++) {
    bit[i] = 1;
  }
  
  for(int i = 0; i < N - 1; i++) {
    bit[int(str.at(i) - '0')] = 0;
  }

  for(int i = 0; i < N; i++) {
    if(bit[i]) cout << i << endl;
  }


  return 0;
}