#include <iostream>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;
int main(){
	int N,K;cin >> N >> K;
	int p[N];

	double ans=0,check=0,check2=0;

	rep(i,N){
		cin >> p[i];
	}

	sort(p, p+N, greater<double>());


	rep(i,K){
		for(int j=1;j<=p[i];j++){
			check+=j;
		}
		ans += (double)(check/p[i]);
		check=0;
	}
	cout << ans << endl;
}
		
