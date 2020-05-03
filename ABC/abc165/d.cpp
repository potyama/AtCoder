#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;

ll min1(ll a, ll b){
	if(a > b){
		return b;
	}else{
		return a;
	}
}

int main(){
	ll A,B,N;cin >>A >> B >> N;
	ll x = min1(B-1, N);
	ll ans = (A*x)/B - A*(x/B);
	
	cout << ans << endl;

}

