#include <iostream>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

bool check(int* A, int N){
	    rep(i,N){
		    if (A[i] == A[i + 1]) {
			    return false;
		    }
	    }
	return true;
}

int main(){
	int N;cin >> N;
	int A[N];
	int flag= 0;

	rep(i,N){
		cin >> A[i];
	}

	sort(A, A+N);
	if(check(A,N)  == true){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}	
