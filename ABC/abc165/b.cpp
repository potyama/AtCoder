#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;

int main(){
	ll N;cin >> N;
	ll i=100;
	double rate =0.01;
	for(int j=0;;j++){
		if(i>=N){
			cout << j << endl;
			return 0;
		}
		i = i+(double)i*rate;
	}
}

