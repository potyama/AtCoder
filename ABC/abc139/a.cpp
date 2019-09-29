#include <iostream>
#include <string>

using namespace std;

int main(){

      int i=0;
      string S,T;

      cin >> S >> T;

      if(S[0] == T[0])i++;
      if(S[1] == T[1])i++;
      if(S[2] == T[2])i++;

      cout << i << endl;
}
