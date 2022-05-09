#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(void)
{
  int N = 0, s;
  map<int, int> A;

  cin >> N;

  for(auto i = 0; i < N; i++) {
    int x;
    cin >> x;
    A[x]++;
  }

  pair<int, int> max(0, 0);

  for(auto x : A) {
    if(max.second < x.second) {
      max.first = x.first;
      max.second = x.second;
    }
  }

  cout << max.first << " " << max.second << endl;

  return 0;

}