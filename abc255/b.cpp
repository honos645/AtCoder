#include<algorithm>
#include<cmath>
#include<iostream>
#include<vector>

using namespace std;

int main(void) {
  int K, N;
  cin >> N >> K;
  vector<int>  A(K);
  vector<pair<int, int>> Position(N);

  for(int i = 0; i < K; i++) {
    cin >> A.at(i);
  }
  for(int i = 0; i < N; i++) {
    cin >> Position.at(i).first >> Position.at(i).second;
  }

  int min = 0;
  vector<double> minDistance(N);
  for(int i = 0; i < N; i++) {
    vector<double> tempDistance(K);
    for(int j = 0; j < K; j++) {
      tempDistance.at(j) = pow((Position.at(i).first - Position.at(A.at(j) - 1).first), 2) + pow((Position.at(i).second - Position.at(A.at(j) - 1).second), 2);
    }
    sort(tempDistance.begin(), tempDistance.end());
    minDistance.at(i) = tempDistance.at(0);
  }
  sort(minDistance.rbegin(), minDistance.rend());

  printf("%.15lf", pow(minDistance.at(0), 0.5));

  return 0;
}