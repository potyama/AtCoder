#include <iostream>
#include <string>
using namespace std;

int main(){
	int N,x=0,y=0;
	string S,T,ans;

	cin >> N;
	cin >> S >> T;

	for(int j = 0;j < N*2;j++){
		if(j%2 == 0){
			ans[j] = S[x];
			x++;
		}else{
			ans[j] = T[y];
			y++;
		}
		cout << ans[j];
	}
	printf("\n");
}

