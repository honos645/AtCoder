#include<iostream>
#include<vector>

using namespace std;

int main(void) {
  long long N, Q;
  cin >> N >> Q;

  int a[N], pos[N];

  for(int i = 0; i < N; i++) {
    a[i] = i + 1;
    pos[i] = 0;
  }

  for(int i = 0; i < Q; i++) {
    int tmp, num;
    cin >> tmp;

    num = tmp + pos[tmp - 1] - 1;
    if(num != N - 1) {
      pos[a[num] - 1]++;
      pos[a[num + 1] - 1]--;
      swap(a[num], a[num + 1]);
    }else {
      pos[a[num] - 1]--;
      pos[a[num - 1] - 1]++;
      swap(a[num - 1], a[num]);
    }

/*
    cout << "a: ";
    for(int j = 0; j < N; j++) {
      cout << a[j] << " ";
    }
    cout << "\tpos: ";
    for(int j = 0; j < N; j++) {
      cout << pos[j] << " ";
    }
    cout << "\n";
*/
  }

  for(int i = 0; i < N; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}