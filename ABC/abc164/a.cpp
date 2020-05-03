#include <iostream>
#include <string>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;

int main(){
	int S,W;cin >> S >> W;
	if(W>=S){
		cout << "unsafe" << endl;
	}else{
		cout << "safe" << endl;
	}
}

