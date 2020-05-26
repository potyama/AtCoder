#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;

int main(){
	int A,B,X;cin >> X >> A >> B;
	int ans=X-A;
	while(ans>=B){
		ans -=B;
	}
	cout << ans << endl;
}

