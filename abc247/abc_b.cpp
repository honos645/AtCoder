#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool checker(string S, int num, string first[], string second[]);

int N;

int main() {
  cin >> N;
  string first[N], second[N];
  for(int i = 0; i < N; i++) {
    cin >> first[i] >> second[i];
  }

  bool ans_fir[N], ans_sec[N];

  for(int i = 0; i < N; i++) {
    if(checker(first[i], i, first, second)) {
      ans_fir[i] = true;
    }else if(checker(second[i], i, first, second)) {
      ans_sec[i] = true;
    }else {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}

bool checker(string S, int num, string first[], string second[]) {
  bool ch = true;
  for(int i = 0; i < N; i++) {
    if(num != i) {
      if(S == first[i]) ch = false;
      if(S == second[i]) ch = false;
      if(ch == false) return ch;
    }
  }
  return ch;
}