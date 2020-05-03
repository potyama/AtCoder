#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i,n) for(int i=0;i<int(n);i++)
#define P pair<int, int>
using namespace std;

int main(void){
	int N,M;cin >> N >> M;
	vector<P> X(M);
	rep(i,M){
		cin >> X[i].first >> X[i].second;
	}
	rep(i,1000){
		int value = i/10;
		vector<int> check(1,i%10);

		while(value){
			check.push_back(value%10);
			value /= 10;
		}

		if(check.size() != N)continue;
		
		bool flag=true;
		reverse(check.begin(), check.end());

		rep(j,M){
			if(check[X[j].first-1] != X[j].second)flag=false;
		}
		if(flag){
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
