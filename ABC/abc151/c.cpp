#include <iostream>
#include <string>

#define ll long long
using namespace std;

int main(){
	ll N,M;cin >> N >> M;
	ll x=0,y=0;
	ll ans1=0,ans2=0;

	for(int i=0;i<M;i++){
		ll p;
		string s;
		cin >> p >> s;

		if(x != p &&s == "AC"){
			ans1++;
			y=0;
			x = p;
		}else{
			ans2++;
			y++;
		}
	}
	cout << ans1 << " " << ans2 - y << endl;
}

