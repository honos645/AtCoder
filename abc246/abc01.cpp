#include<iostream>

using namespace std;

int main(void)
{
  pair<int, int> ans, a[3];

  for(int i = 0; i < 3; i++) {
    cin >> a[i].first >> a[i].second;
  }


  if(a[0].first == a[1].first) {
    ans.first = a[2].first;
  }else if(a[0].first == a[2].first) {
      ans.first = a[1].first;
  }else {
    ans.first = a[0].first;
  }

  if(a[0].second == a[1].second) {
    ans.second = a[2].second;
  }else if(a[0].second == a[2].second) {
    ans.second = a[1].second;
  }else {
    ans.second = a[0].second;
  }

  cout << ans.first << " " << ans.second << endl;

  return 0;

}