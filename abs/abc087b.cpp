#include<iostream>

int main(void)
{
  int a, b, c;
  int x;
  int cnt = 0;

  std::cin >> a >> b >> c >> x;

  for(int i = 0; i <= c; i++) {
    for(int j = 0; j <= b; j++) {
      for(int k = 0; k <= a; k++) {
        if(500 * k + 100 * j + 50 * i == x) cnt++;
      }
    }
  }
  std::cout << cnt << std::endl;

  return 0;
}