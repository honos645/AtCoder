#include<iostream>
#include<math.h>

using namespace std;

int main(void)
{
  int n, k;

  cin >> n >> k;
  int a[n], b[n];
  bool ansA[n] = {false}, ansB[n] = {false};

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int j = 0; j < n; j++) {
    cin >> b[j];
  }

  ansA[0] = true;
  ansB[0] = true;

  for(int i = 1; i < n; i++) {
    if(ansA[i - 1] == true) {
    if(abs(a[i - 1] - a[i]) <= k) ansA[i] = true;
    if(abs(a[i - 1] - b[i]) <= k) ansB[i] = true;
    }
    if(ansB[i - 1] == true) {
    if(abs(b[i - 1] - a[i]) <= k) ansA[i] = true;
    if(abs(b[i - 1] - b[i]) <= k) ansB[i] = true;
    }
  }

  bool flg = true;
  for(int i = 0; i < n; i++) {
    if(ansA[i] == false && ansB[i] == false) flg = false;
  }

  if(flg) {
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }
  
  return 0;
}