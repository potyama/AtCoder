#include <iostream>
#include <string>

using namespace std;

int main(){
      string S;cin >> S;
      int ans=0;
      if(S[0] == 'o')ans++;
      if(S[1] == 'o')ans++;
      if(S[2] == 'o')ans++;
      cout << 700 + (100*ans) << endl;
}
