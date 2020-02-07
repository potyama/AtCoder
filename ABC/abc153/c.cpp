#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main(){
	ll N,K,ans=0;cin >> N >> K;
	vector<ll> A(N);
	rep(i,N)cin>>A[i];
	if(N <= K){
		cout << 0 << endl;
		return 0;
	}
	sort(A.begin(), A.end());

	rep(i,K)A.pop_back();
	rep(i,N-K)ans += A[i];

	cout << ans << endl;

}
