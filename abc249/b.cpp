#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(void) {
  bool big = false;
  bool small = false;
  map<char, int> check;
  string S;
  cin >> S;

  for(int i = 0; i < S.size(); i++) {
    check[S.at(i)] = 0;
  }

  for(int i = 0; i < S.size(); i++) {
    if('a' <= S.at(i) && S.at(i) <= 'z') {
      small = true;
    }else if('A' <= S.at(i) && S.at(i) <= 'Z') {
      big = true;
    }
    check[S.at(i)] += 1;
  }

  if(!(small && big)) {
    cout << "No" << endl;
    return 0;
  }
  for(auto i = check.begin(); i != check.end(); i++) {
    if(i->second > 1) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

  return 0;
}