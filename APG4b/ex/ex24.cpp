#include <bits/stdc++.h>
using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する
struct Clock
{
  int hour;
  int minute;
  int second;
  void set(int n, int m, int s)
  {
    hour = n;
    minute = m;
    second = s;
  }
  auto to_str()
  {
    string view;

    if(hour < 10) {
      view = "0" + to_string(hour) + ":";
    }else {
      view = to_string(hour) + ":";
    }
    if(minute < 10) {
      view += "0" + to_string(minute) + ":";
    }else {
      view += to_string(minute) + ":";
    }
    if(second < 10) {
      view += "0" + to_string(second);
    }else {
      view += to_string(second);
    }
    return view;
  }
  void shift(int diff_second)
  {
    int sec = hour * 3600 + minute * 60 + second;

    sec += diff_second;
    if(sec < 0) sec += 86400;
    hour = sec / 3600;
    minute = (sec - hour * 3600) / 60;
    second = (sec - hour * 3600 - minute * 60);
    while(hour > 23) hour -= 24;
    while(hour < -1) hour += 24;

    return;
  }
};


int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.to_str() << endl;

  // 時計を進める(戻す)
  clock.shift(diff_second);

  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}
