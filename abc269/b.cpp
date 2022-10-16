#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void){
  int A = -1, B = -1, C = -1, D = -1;
  vector<string> S(10);

  for (int i = 0; i < 10; i++) {
    cin >> S.at(i);
  }

  bool Flag = false;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if(S.at(i).at(j) == '#') {
        A = i;
        C = j;
        Flag = true;
      }
      if(Flag) break;
    }
    if(Flag) break;
  }

  B = A;
  D = C;

  for (int i = A; i < 10; i++)
  {
    if(S.at(i).at(C) == '#') B++;
  }
  for (int i = C; i < 10; i++) {
    if(S.at(A).at(i) == '#') D++;
  }

    cout << A + 1 << " " << B << "\n" << C + 1 << " " << D << endl;

  return 0;
}