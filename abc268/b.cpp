#include<iostream>
#include<string>

using namespace std;

int main(void) {
  string S, T;

  cin >> S >> T;

  T = T.substr(0, S.size());

  if(S == T) {
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }

  return 0;
}