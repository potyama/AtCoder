#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int N,M;cin >> N >> M;
	int A[N];
	int check=0;
	int ans=0;

	for(int i=0; i<N; i++){
		cin >> A[i];
		check+=A[i];
	}
	check = check/(4*M);
	cout << check << endl;
	sort(A, A+N, greater<int>());
	for(int i=0; i<M;i++){
		if(A[i] >= check)ans++;
		if(ans == M){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}
