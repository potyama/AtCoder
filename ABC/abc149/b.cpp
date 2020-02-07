#include <iostream>
#define ll long long
using namespace std;

int main(){
	ll A,B,K,x; cin >> A >> B >> K;

	if(K <= A){
		cout << A-K << ' ' << B << endl;
	}else if(K <= A+B){
		x = K-A;
		B = B - x;
		cout << 0 << ' ' << B << endl;
	}else{
		cout << 0 << ' ' << 0 << endl;
	}
}
