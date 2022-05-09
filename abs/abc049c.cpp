#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(void)
{
  string S, ans;
  cin >> S;

  int i = 0;
  reverse(S.begin(), S.end());
  while(i < S.size()) {
    if(S[i] == 'm' && S[i + 1] == 'a' && S[i + 2] == 'e' && S[i + 3] == 'r' && S[i + 4] == 'd') {
      ans += "maerd";
      i += 5;
    }else if(S[i] == 'e' && S[i + 1] == 's' && S[i + 2] == 'a' && S[i + 3] == 'r' && S[i + 4] == 'e') {
      ans += "esare";
      i += 5;
    }else if(S[i] == 'r' && S[i + 1] == 'e' && S[i + 2] == 'm' && S[i + 3] == 'a' && S[i + 4] == 'e' && S[i + 5] == 'r' && S[i + 6] == 'd') {
      ans += "remaerd";
      i += 7;
    }else if(S[i] == 'r' && S[i + 1] == 'e' && S[i + 2] == 's' && S[i + 3] == 'a' && S[i + 4] == 'r' && S[i + 5] == 'e') {
      ans += "resare";
      i += 6;
    }else {
      break;
    }
  }

  if(S == ans) {
    cout << "YES" << endl;
  }else {
    cout << "NO" << endl;
  }

  return 0;
}