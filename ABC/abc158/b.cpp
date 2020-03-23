#include <iostream>
using namespace std;

int main(void){
      long long  N,A,B;cin >> N >> A >> B;
      long long r = 0,b=0;

      if(A == 0){
            cout << 0 << endl;
            return 0;
      }

      r = N/(A+B);
      if(r < B){
            b = (r*A) + (N-(A+B));
      }else{
            b = (r*A) + B;
      }
      cout << b << endl;
}
