#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
#define P pair<ll, ll>
using namespace std;

int main(){
	ll N,M;cin >> N >> M;
	ll ans=0;
	vector<P> A(N);
	rep(i,N){
		cin >> A[i].first >> A[i].second;
	}
	sort(A.begin(),A.end());
	rep(i,N){
		ll X=min(M,A[i].second);

		ans+=X*A[i].first;
		M-=X;
	}
	cout << ans << endl;
}

