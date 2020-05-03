#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
	ll r = a%b;

	while(r > 0){
		a = b;
		b = r;
		r = a%b;
	}
	return b;
}

int main(){
	ll K;cin>>K;
	ll ans=0;
	ll check=0;

	for(int i=1;i<=K;i++){
		for(int j=1;j<=K;j++){
			check = gcd(i, j);
			for(int k=1;k<=K;k++){
				ans += gcd(check,k);
			}
		}
	}
	cout << ans << endl;
}
