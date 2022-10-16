#include<iostream>
#include<vector>

using namespace std;

int main(void) {
  int N;
  cin >> N;

  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }

  if(a.at(0) != 1 && a.size() < 2) {
    cout << "0" << endl;
    return 0;
  }

  int checkNum = 1, i = 0;
  int ans = 0;
  for (auto itr = a.begin(); itr != a.end(); itr++) {
    printf("++check: %d\tans: %d++ *itr: %d *   ", checkNum, ans, *itr);
    if(*itr != checkNum && i + 2 > a.size()) {
      break;
    }else if(*itr != checkNum){
      // a.erase(a.end() - 2, a.end() - 1);
      a.pop_back();
      a.pop_back();
      itr--;
    }
    checkNum++;
    ans++;
    for (const auto& e : a) {cout << e << " ";}printf("\tcheck: %d\tans: %d\titr: %d\n", checkNum, ans, *itr);
  }

  for (int i = 0; i < a.size(); i++) {
    cout << a.at(i) << " ";
  }
  cout << "\n" << ans << endl;

  return 0;
}