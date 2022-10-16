#include<iostream>
#include<string>
#include<bitset>
#include<vector>

using namespace std;

  int main(void) {
  long long int n;
  cin >> n;
  vector<int> set;

  for (int i = 0; i < (1 << n); i++) {
    if(n & (1 << i)) set.push_back(i);
  }

  cout << "{ ";
  for (int i = 0; i < set.size(); i++) {
    cout << set.at(i) << " ";
  }
  cout << "}" << endl;

  for (int bit = 0; bit < (1 << set.size()); bit++) {
    long long int temp = 0;
    vector<int> S;
    for (int i = 0; i < set.size(); i++) {
      if (bit & (1 << i)) {
        temp += 1 << set.at(i);
        S.push_back(set.at(i));
      }
    }

    cout << "{ ";
    for (int i = 0; i < S.size(); i++) {
      cout << S.at(i) << " ";
    }
    cout << "} " << temp << endl;
    }

  return 0;
}