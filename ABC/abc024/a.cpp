#include <iostream>
using namespace std;

int main(){
      int A,B,C,K;cin >> A >> B >> C >> K;
      int S,T;cin >> S >> T;
      
      if(S+T>=K){
            cout << (A*S+B*T)-(S+T)*C << endl;
      }else{
            cout << A*S+B*T << endl;
      }
}
