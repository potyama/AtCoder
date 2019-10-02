#include <iostream>

using namespace std;

int main(){
      int A,B,i,ans=0;

      cin >> A >> B;

      for(i = A;i<=B;i+=A){
            ans++;
      }
      if(B%A!=0)ans++;

      cout << ans<< endl;
}
