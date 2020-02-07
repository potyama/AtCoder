#include <iostream>
using namespace std;

int main(){
	int N,K,M;cin >> N >> K >> M;
	int x=0,y=(N*M);
	for(int i=1;i<N;i++){
		int a;
		cin >> a;
		x += a;
	}
	if(y-x>K){
		cout << -1 << endl;
	}else if(y-x < 0){
		cout << 0 << endl;
	}else{
		cout << y-x << endl;
	}
}
