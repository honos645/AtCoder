#include<iostream>
#include<math.h>

using namespace std;

int main(void)
{
  int n, k;

  cin >> n >> k;
  int a[n], b[n], ans[n];

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int j = 0; j < n; j++) {
    cin >> b[j];
  }

  int f = 0;
  if(abs(a[0] - a[1]) <= k || abs(a[0] - b[1]) <= k) {
    ans[0] = a[0];
    for(int i = 0; i < n; i++) {
      if(f != 0) break;
      if(abs(ans[i] - a[i + 1]) <= k) {
        ans[i] = a[i];
      }else if(abs(ans[i] - b[i + 1]) <= k) {
        ans[i] = b[i];
      }else {
        f = 1;
      }
    }
  }else if(abs(b[0] - a[1]) <= k || abs(b[0] - b[1]) <= k) {
    ans[0] = b[0];
    for(int i = 0; i < n; i++) {
      if(abs(ans[i] - a[i + 1]) <= k) {
        ans[i] = a[i];
      }else if(abs(ans[i] - b[i + 1]) <= k) {
        ans[i] = b[i];
      }else {
        cout << "No" << endl << i << endl;
        return 0;
      }
    }
  }else {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  for(int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}