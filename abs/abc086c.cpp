#include<iostream>

using namespace std;

struct Distance
  {
    int t;
    int x;
    int y;
  };

int main(void)
{
  int N;
  cin >> N;
  N += 1;
  Distance d[N];

  d[0] = {0, 0, 0};
  for(int i = 1; i < N; i++) {
    cin >> d[i].t >> d[i].x >> d[i].y;
  }

  for(int i = 1; i < N; i++) {
    Distance D = {abs(d[i].t - d[i - 1].t), abs(d[i].x - d[i - 1].x), abs(d[i].y - d[i - 1].y)};
    if(D.t - D.x - D.y < 0 || (D.t - D.x - D.y) % 2 != 0) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}