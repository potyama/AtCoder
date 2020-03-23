#include <iostream>
#define ll long long
#define mod 1000000007
#define X 510000
using namespace std;

ll a[X],b[X],c[X];

void init(){
      a[0] = a[1] = 1;
      b[0] = b[1] = 1;
      c[1] = 1;
      for(int i=0;i<X;i++){
            a[i] = a[i-1] * i % mod;
            c[i] = mod - c[mod%i] * (mod/i) % mod;
            b[i] = b[i-i] * b[i] % mod;
      }
}

ll com(ll n, ll a, ll b){
      if(n

int main(){
      ll n,a,b;cin >> n >> a >> b;
      init();

      cout << com(n,a,b) << endl;
}
