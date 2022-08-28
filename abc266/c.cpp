#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main(void) {
  vector<pair<int, int>> P(4);
  vector<int> G(6);

  for (int i = 0; i < 4; i++) {
    cin >> P.at(i).first >> P.at(i).second;
  }

  G.at(0) = (P.at(1).first - P.at(0).first) * (P.at(1).first - P.at(0).first) + (P.at(1).second - P.at(0).second) * (P.at(1).second - P.at(0).second);
  G.at(1) = (P.at(2).first - P.at(1).first) * (P.at(2).first - P.at(1).first) + (P.at(2).second - P.at(1).second) * (P.at(2).second - P.at(1).second);
  G.at(2) = (P.at(3).first - P.at(2).first) * (P.at(3).first - P.at(2).first) + (P.at(3).second - P.at(2).second) * (P.at(3).second - P.at(2).second);
  G.at(3) = (P.at(0).first - P.at(3).first) * (P.at(0).first - P.at(3).first) + (P.at(0).second - P.at(3).second) * (P.at(0).second - P.at(3).second);
  G.at(4) = (P.at(2).first - P.at(0).first) * (P.at(2).first - P.at(0).first) + (P.at(2).second - P.at(0).second) * (P.at(2).second - P.at(0).second);
  G.at(5) = (P.at(1).first - P.at(3).first) * (P.at(1).first - P.at(3).first) + (P.at(1).second - P.at(3).second) * (P.at(1).second - P.at(3).second);

  if(G.at(4) > G.at(0) && G.at(4) > G.at(1)) {
    cout << "Yes" << endl;
  }else {
    if((P.at(2).first - P.at(0).first) * (P.at(2).first - P.at(0).first) > (P.at(2).second - P.at(0).second) * (P.at(2).second - P.at(0).second)) {
      if(P.at(0).first > P.at(2).first) {
        if(P.at(0).first < P.at(3).first) {
          cout << "No" << endl;
          return 0;
        }
      }else {
        if(P.at(0).first > P.at(3).first) {
          cout << "No" << endl;
          return 0;
        }
      }
    }else {
      if(P.at(0).second > P.at(2).second) {
        if(P.at(0).second < P.at(3).second) {
          cout << "No" << endl;
          return 0;
        }
      }else {
        if(P.at(0).second > P.at(3).second) {
          cout << "No" << endl;
          return 0;
        }
      }
    }
  }

  return 0;
}