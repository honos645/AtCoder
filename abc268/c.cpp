#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main(void) {
  int N, ans = 0;
  cin >> N;

  vector<vector<int>> nice(N);
  for (int i = 0; i < N; i++) {
    nice.at(i).push_back(i);
    nice.at((i + 1) % N).push_back(i);
    nice.at((i - 1 % N < 0) ? N + (i - 1 % N) : (i - 1 % N)).push_back(i);
  }

  list<int> p;
  for (int i = 0; i < N; i++) {
    int temp;
    cin >> temp;
    p.push_back(temp);
  }

  for (int i = 0; i < p.size(); i++) {
    int temp = 0, j = 0;
    for (auto itr = p.begin(); itr != p.end(); itr++) {
      for (int k = 0; k < nice.at(j).size(); k++) {
        if(nice.at(j).at(k) == *itr) {
          temp++;
          break;
        }
      }
      j++;
    }
    if(temp > ans) ans = temp;
    p.push_back(*p.begin());
    p.pop_front();
  }
  cout << ans << endl;

  return 0;
}