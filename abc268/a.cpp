#include<iostream>
#include<vector>

using namespace std;

int main(void) {
  vector<int> D;
  int temp;

  cin >> temp;
  D.push_back(temp);

  for (int i = 0; i < 4; i++) {
    bool flag = true;
    cin >> temp;
    for (int j = 0; j < D.size(); j++) {
      if(D.at(j) == temp) {
        flag = false;
        break;
      }
    }
    if(flag) D.push_back(temp);
  }

  cout << D.size() << endl;

  return 0;
}