#include <iostream>
#include <cmath>

typedef long long ll;
const ll INF = 1LL << 62;

using namespace std;

int main(){
      ll N;
      cin >> N;
      
      ll ans = INF;

      for(ll i = 1;i*i <= N;i++){
            if(N%i==0){
                  ans = min(ans,(i-1)+(N/i-1));
            }
      }
      cout << ans << endl;
}

