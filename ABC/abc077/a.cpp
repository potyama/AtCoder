#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;

int main(){
	string N,S;cin >> N >> S;
	if(N[0] == S[2] && S[0] == N[2] && N[1] == S[1]){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

