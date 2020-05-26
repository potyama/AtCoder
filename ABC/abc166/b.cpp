#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;

int main(){
	int N,K,d;cin >> N >> K;
	int ans =0;
	vector<int> A;
	rep(i,K){
		cin >> d;
		for(int j=0;j<d;j++){
			int m;cin >> m;
			A.push_back(m); 
		}
	}
	sort(A.begin(), A.end());
	A.erase(unique(A.begin(), A.end()), A.end());

	cout << N-A.size() << endl;


}

