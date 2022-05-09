#include<stdio.h>

int main(void) {
  int N;
  scanf("%d", &N);

  char str[N];
  for(int i = 0; i < N; i++) {
    if(i % 2 == 0) {
      str[i] = '(';
    }else {
      str[i] = ')';
    }
  }
  printf("%s\n", str);

  return 0;
}