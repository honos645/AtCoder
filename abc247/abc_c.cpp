#include<iostream>
#include<vector>

using namespace std;

vector<int> func(int N);

int main(void) {
  int N;
  cin >> N;
  vector<int> ans;

  ans = func(N);

  for(int i = 0; i < ans.size(); i++) {
    cout << ans.at(i) << " ";
  }
  cout << endl;

  return 0;
}

vector<int> func(int N) {
  vector<int> ans, answer;
  if(N == 1) {
    ans.push_back(1);
    return ans;
  }
  ans = func(N - 1);
  answer = ans;
  answer.push_back(N);
  answer.insert(answer.end(), ans.rbegin(), ans.rend());
  return answer;
}