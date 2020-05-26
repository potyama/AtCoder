#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;

int main(){
	int a,b,c;cin >> a >> b >> c;
	if(c<= a+b){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}

