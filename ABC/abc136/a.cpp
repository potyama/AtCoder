#include <iostream>
using namespace std;

int main(){
      int A,B,C;cin >> A >> B >> C;
      int ans=0;
      
      ans = (A-B);
      ans = C -ans;

      if(ans <= 0){
            cout << 0 << endl;
      }else{
            cout << ans << endl;
      }
}
