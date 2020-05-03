#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main(void){
	ll N,K;cin >> N >> K;
	ll x=N;
	ll ans=0;
	if(N%K==0){
		cout << 0 << endl;
		return 0;
	}
	x=abs(x-K);
	ans = N%K;
	ans = K-ans;
	cout << min({ans, x, N}) << endl;
}
