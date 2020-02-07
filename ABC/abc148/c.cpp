#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
	ll r = a%b;

	while(r != 0){
		a = b;
		b = r;
		r = a%b;
	}
	return b;
}

ll lcm(ll a, ll b){

	return (a*b)/gcd(a, b);
}

int main(){
	ll A,B,ans;
	cin >> A >> B;
	ans=lcm(A,B);
	cout << ans << endl;

}
