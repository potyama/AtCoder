#include <iostream>
using namespace std;

int main(){
      int N,K,ans = 0;
      int h;
      cin >> N >> K;

      for(int i = 0;i < N;i++){
            cin >> h;
            if(h >= K)ans++;
      }
      cout << ans << endl;
}
