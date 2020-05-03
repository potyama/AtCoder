#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;

int main(){
	int N;cin >> N;

	vector<string> S(N);

	rep(i, N){
		cin >> S[i];
	}
	sort(S.begin(), S.end());
	S.erase(unique(S.begin(), S.end()), S.end());
	
	cout << S.size() << endl;
}

