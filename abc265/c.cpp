#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void) {
  long long int H, W;
  cin >> H >> W;

  vector<string> G;
  pair<int, int> here = {0, 0};

  for (int i = 0; i < H; i++) {
    string tmp;
    cin >> tmp;
    G.push_back(tmp);
  }

  bool flag = true;
  while (flag) {
    if(here.first > W - 1 || here.second > H - 1 || here.first < 0 || here.second < 0) break;
    switch(G.at(here.first).at(here.second)) {
      case 'U':
        if(here.first != 0) {
          here.first -= 1;
        }else {
          flag = false;
        }
        break;
      case 'D':
        if(here.first != H - 1) {
          here.first += 1;
        }else {
          flag = false;
        }
        break;
      case 'L':
        if(here.second != 0) {
            here.second -= 1;
          }else {
            flag = false;
          }
        break;
      case 'R':
        if(here.second != W - 1) {
            here.second += 1;
        }else {
          flag = false;
        }
        break;
      default:
        flag = false;
        break;
    }
    printf("%c\t(%d, %d)\n", G.at(here.first - 1).at(here.second - 1), here.first + 1, here.second + 1);
  }

  cout << here.first + 1 << " " << here.second + 1 << endl;

  return 0;
}