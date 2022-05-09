#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(void) {
  int A, B, C, D, E, F, X;
  cin >> A >> B >> C >> D >> E >> F >> X;
  map<string, int> score;

  score["Takahashi"] = (X / (A + C)) * B;
  if(X % (A + C)  < A) score["Takahashi"] += (X % (A + C)) * B;
  score["Aoki"] = (X / (D + F) * E);
  if(X % (D + F) < D) score["Aoki"] += (X % (D + F)) * E;

  if(score["Takahashi"] > score["Aoki"]) {
    cout << score->first << endl;
  }

  cout << score->first << endl;

  return 0;
}