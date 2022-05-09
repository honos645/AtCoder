#include<iostream>


using namespace std;

int main(void)
{
  int a, b, c, d;

  cin >> a >> b >> c >> d;

  if(a < c || a == c && b < d) {
    cout << "Takahashi" << endl;
    }else if(a == c && b == d) {
      cout << "Takahashi" << endl;
    }else {
      cout << "Aoki" << endl;
    }

    return 0;


}