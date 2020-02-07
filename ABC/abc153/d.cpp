#include <iostream>
using namespace std;
#define ll long long

ll check(ll H){
	if(H == 1)return 1;
	ll x = check(H/2);
	return x*2+1;
}
int main(){
	ll H;cin>>H;

	cout << check(H) << endl;
}

