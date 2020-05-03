#include <iostream>
#include <string>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;

int main(void){
	int A,B,C,D;cin >> A >> B >> C >> D;

	while(true){
		C-=B;
		if(C <= 0){
			cout << "Yes" << endl;
			return 0;
		}
		A-=D;
		if(A <= 0){
			cout << "No" << endl;
			return 0;
		}
	}
}

