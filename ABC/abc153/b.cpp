#include <iostream>
using namespace std;
#define ll long long

int main(){
	ll H,N,A,ans=0;cin >>H >> N;
	for(ll i=0;i<N;i++){
		cin >> A;
		ans += A;
	}
	if(H > ans){
		cout << "No" << endl;
	}else{
		cout << "Yes" << endl;
	}
}
