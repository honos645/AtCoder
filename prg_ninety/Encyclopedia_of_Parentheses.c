#include<stdio.h>

void swap(char a, char b);

int main(void) {
  int N;
  scanf("%d", &N);

  for(int bit = 0; bit < (1 << N); bit++) {
    char str[N];
    for(int i = 0; i < N; i++) {
      if(bit & 1 << i) {
        str[i] = '(';
      }else {
        str[i] = ')';
      }
    }
    int count = 0;
    for(int i = 0; i < N; i++) {
      if(count < 0) break;
      if(str[i] == '(') {
        count++;
      }else if(str[i] == ')') {
        count--;
      }
    }
    if(count == 0) printf("%s\n", str);
  }

  return 0;
}
