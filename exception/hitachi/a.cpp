#include <iostream>
#include <string>
using namespace std;

int main(){

      string S;cin >> S;
      int flag = 0;

      for(int i=0;S[i]!='\0';i++){
            if(S[i] == 'h' &&  S[i+1] == 'i' && S[i+2] == 'h')flag = 1;
            if(S[i] == 'h' &&  S[i+1] == 'i' && S[i+2] == '\0')flag = 1;
            
      }
      if(flag == 1){
            cout << "Yes" << endl;
      }else{
            cout << "No" << endl;
      }
}
