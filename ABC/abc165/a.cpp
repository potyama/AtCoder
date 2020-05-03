#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;

int main(){
	int K;cin >> K;
	int N,M;cin >> N >> M;

	for(int i=N;i<=M;i++){
		if(i%K==0){
			cout << "OK" << endl;
			return 0;
		}
	}
	cout<< "NG" << endl;	
}

