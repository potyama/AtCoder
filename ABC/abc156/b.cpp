#include <iostream>
using namespace std;

int main(void){
      int N,K,ans=1;cin >> N >> K;
      int x = 0;
      if(N<K){
            cout << 1 << endl;
            return 0;
      }
            
      for(;;){
            if(ans == 1)x = K*K;
            else x*= K;
            if(x>N){
                  ans++;
                  break;
            }
            ans++;
      }
      cout << ans << endl;
      
}
            
