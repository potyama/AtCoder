#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a,ll b){
      ll t = a%b;
      while(t > 0){
            a = b;
            b = t;
            t  = a%b;
      }
      return b;
}

int main(){
      ll A,B,ans=1;
      cin >> A >> B;
      
      ll N = gcd(A,B);
      for(ll i = 2;i*i <= N;i++){
            if(N%i == 0){
                  ans++;
                  while(N%i==0)N/=i;
            }
      }
      if(N > 1)ans++;
      cout << ans << endl;
}
     

