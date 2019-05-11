#include <iostream>
using namespace std;

int main(){
      int a=0;
      string s;

      cin >> s;
      if(s[0] == '1')a++;
      if(s[1] == '1')a++;
      if(s[2] == '1')a++;
      cout << a << endl;
}
