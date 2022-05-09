#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(void)
{
  pair<long double, long double> p;
  long double ans;
  cin >> p.first >> p.second;

  long double d = p.second / p.first;

  ans = sqrt(1 / (1 + pow(d, 2)));
  
  cout << fixed << setprecision(15) << ans << " " << ans * d << endl;

  cout << sqrt(pow(ans, 2) + pow(ans * d, 2)) << endl;
  return 0;
}