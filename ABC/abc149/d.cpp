#include <iostream>
#include <string>
using namespace std;

int main(){
	int N,K,ans=0;
	cin >> N >> K;

	int R,S,P;
	cin >> R >> S >> P;

	string T;
	cin >> T;

	for(int i = 0;i < N;i++){
		if(T[i] == 'r' && T[i-K] != 'r'){
			ans+=P;
		}else if(T[i] == 's' && T[i-K] != 's'){
			ans+=R;
		}else if(T[i] == 'p' && T[i-K] != 'p'){
			ans+=S;
		}
	}
	cout << ans << endl;
}

