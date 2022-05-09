#include<iostream>

using namespace std;

int main(void)
{
  int N, Y;
  cin >> N >> Y;

  for(int i = 0; i <= N; i++) {
    for(int j = 0; j <= N; j++) {
      int k = N - (i + j);

      if(k >= 0) {
        if(Y == 10000 * i + 5000 * j + 1000 * k) {
          printf("%d %d %d\n", i, j, k);
          return 0;
        }
      }
    }
  }

  printf("-1 -1 -1\n");

  return 0;
}