#include <iostream>
#include <string>
using namespace std;

int main(){

      string S;
      bool a=0;
      cin >> S;
      
      if(S[0] == S[1]){
            if(S[0] != S[2] && S[2] == S[3]){
                  a = 1;
            }
      }else if(S[0] == S[2]){
            if(S[0] != S[1] && S[1] == S[3]){
                  a = 1;
            }
      }else if(S[0] == S[3]){
            if(S[0] != S[1] && S[1] == S[2]){
                  a=1;
            }
      }

      if(a == 1){
            cout << "Yes" << endl;
      }else{
            cout << "No" << endl;
      }
}
