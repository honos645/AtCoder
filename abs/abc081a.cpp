#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  string S;
  int cnt = 0;

  cin >> S;

  for(int i = 0; i < 3; i++) {
    if(S[i] == '1') cnt++;
  }

  cout << cnt << endl;
  return 0;
}