#include<iostream>
#include<bitset>

using namespace std;

int main(void) {
  bitset<4> S;
  cin >> S;

  cout << (S >> 1) << endl;
  
  return 0;
}