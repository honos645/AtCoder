#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool check(vector<int> V) {
  for (int i = 0; i < V.size(); i++) {
    if(V.at(i) == 1) return true;
  }

  return false;
}

int main(void) {
  string S;
  vector<vector<int>> P(7);

  cin >> S;

  P.at(0).push_back(int(S.at(6) - '0'));
  P.at(1).push_back(int(S.at(3) - '0'));
  P.at(2).push_back(int(S.at(1) - '0'));
  P.at(2).push_back(int(S.at(7) - '0'));
  P.at(3).push_back(int(S.at(0) - '0'));
  P.at(3).push_back(int(S.at(4) - '0'));
  P.at(4).push_back(int(S.at(2) - '0'));
  P.at(4).push_back(int(S.at(8) - '0'));
  P.at(5).push_back(int(S.at(5) - '0'));
  P.at(6).push_back(int(S.at(9) - '0'));

  if(S.at(0) == '1') {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i < 5; i++) {
    if(check(P.at(i))) {
      for (int j = i + 1; j < 7; j++) {
        if(check(P.at(j))) {
          for (int k = i + 1; k < j; k++) {
            if(check(P.at(k))) {
              cout << "No" << endl;
            }
          }
        }
      }
    }
      if ((check(P.at(i)) & check(P.at(i + 2))))
      {
        if (!check(P.at(i + 1)))
        {
          cout << "Yes" << endl;
          return 0;
        }
      }
  }

  cout << "No" << endl;

  return 0;
}