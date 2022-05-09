#include<iostream>

using namespace std;

int main(void) {
  int A, B, C, D, E, F, X;
  int T, a;
  cin >> A >> B >> C >> D >> E >> F >> X;
  pair<int, int> Ta, Ao;
  
  Ta.first  = X / (A + C);
  Ta.second = X % (A + C);
  T = Ta.first * A * B;
  if(Ta.second > A) {
      T += A * B;
    }else {
      T += B * Ta.second;
    }
  
  Ao.first = X / (D + F);
  Ao.second = X % (D + F);
  a = Ao.first * D * E;
  if(Ao.second > D) {
    a += D * E;
  }else {
    a += E * Ao.second;
  }

  if(T > a) {
    cout << "Takahashi" << endl;
  }else if(T < a) {
    cout << "Aoki" << endl;
  }else {
    cout << "Draw" << endl;
  }
  
  return 0;
}