#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define K 1000000000
#define ll long long
using namespace std;

int main(){
	ll X;cin >> X;
	ll i,j;
	for(i=-500;i<=500;i++){
		for(j=-500;j<=500;j++){
			if((i*i*i*i*i) - (j*j*j*j*j) == X){
				cout << i << " " << j << endl;
				return 0;
			}
		}
	}
}

