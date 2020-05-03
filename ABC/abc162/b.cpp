#include <iostream>
#define ll long long
using namespace std;

int main(){
	ll N;cin >> N;
	ll ans=0;
	for(int i=1;i<=N;i++){
		if(i%3!=0 && i%5!=0){
			ans = ans + i;
		}
	}
	cout << ans << endl;
}
