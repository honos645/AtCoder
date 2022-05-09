#include<iostream>
#include<string>

using namespace std;

int main(void) {
  string S;

  cin >> S;
  int size = S.length();
  int s[size];
  for(int i = 0; i < size; i++) {
    s[i] = int(S[i] - '0');
  }

  //long long int sum = stoi(S);
  for(int bit = 0; bit < (1 << size - 1); ++bit) {
    printf("bit: %3d", bit);
    for(int i = 0; i < size; i++) {
      printf("  *%d*: ", i);
      if(bit & (1 << i)) {
        printf(" * ");
      }else {
        printf("   ");
      }
    }
    cout << endl;
  }

  /*
  for(int bit = 0; bit < (1 << size - 1); ++bit) {
    cout << "bit: " << bit << "  ";
    for(int i = 0; i < size; i++) {
      printf("  *%d*: ", i);
      if(bit & (1 << i)) {
        sum += 
      }
    }
    cout << endl;
  }
  */

  int tmp = 1 << (size - 1);
  cout << "+" << tmp << "+" << endl;
  return 0;
}