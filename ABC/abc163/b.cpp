#include <iostream>
#include <string>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;

int main(){
	ll N,M;cin >> N>>M;
	ll ans = N;

	for(int i=0;i<M;i++){
		ll A;cin >> A;
		ans -= A;
	}
	if(ans < 0){
		cout << -1 << endl;
	}else{
		cout << ans << endl;
	}
}

