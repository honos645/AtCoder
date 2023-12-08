#include<iostream>

using namespace std;

int main(void) {
  int M, D, y, m, d;

  cin >> M >> D >> y >> m >> d;

  // すべて日に変換
  int day = y * M * D + m * D + d + 1;

  cout << day / M / D  << " " << day % M << " " << day % D << endl;
  return 0;
}