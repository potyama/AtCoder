#include<iostream>
#define ll long long
using namespace std;


int main(){
      ll l,r;cin >> l >> r;
      ll ans = 2018;

      if(r-l>=2019){
            cout << 0 << endl;
      }else{
            for(ll i=l;i<r;i++){
                  for(ll j=i+1;j<=r;j++){
                        ans = min(ans, (i*j) % 2019);
                  }
            }
            cout << ans << endl;
      }
}
