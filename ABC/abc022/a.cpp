#include <iostream>
using namespace std;

int main(){
      int N,S,T;cin >> N >> S >> T;
      int W;cin >> W;
      int A,ans=0;
      
      if(S <= W && W <= T)ans++;
      for(int i = 0;i < N - 1;i++){
            cin >> A;
            W += A;
            if(S <= W && W <= T)ans++;
      }
      cout << ans << endl;
}
