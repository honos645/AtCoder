#include<iostream>
#include<string>
#include<vector>
#include<map>

int add_sca(int temp);

using namespace std;

int main(void)
{
  int N = 0;
  cin >> N;

  for(int i = 0; i < N; i++) {
    string funcname;

    cin >> funcname;

    map<char, int> var;
    map<char, vector<int>> arr;


    if(funcname == "int") {
      char temp;
      int tmp;
      scanf(" %c = %d", &temp, &tmp);
      var[temp] = tmp;
      var[temp] = add_sca(var[temp]);
    }else if(funcname == "print_int") {
      char temp;
      int tmp;
      cin >> temp;
      if( var.find(temp) == var.end()) {
        cout << "+++" << endl;
      }else {
        cout << "---" << endl;
      }

    }else if(funcname == "vec") {

    }else if(funcname == "print_vec") {

    }
  }

  return 0;
}

int add_sca(int temp)
{
  string t;
  int tmp;
  cin >> t;
  while(t != ";") {
    cin >> tmp;

    if(t == "+") {
      temp += tmp;
    }else if(t == "-") {
      temp -= tmp;
    }
    
    cin >> t;
  }

  return temp;

}