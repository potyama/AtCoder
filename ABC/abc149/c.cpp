#include <iostream>
using namespace std;

bool prime(int x){
	if(x <= 1){
		return false;
	}

	for(int i = 2;i*i <= x;i++){
		if(x%i == 0){
			return false;
		}
	}
	return true;
}


int main(){
	int x;
	cin >> x;

	int a = x;
	while(!prime(a)){
		a++;
	}

	cout << a << endl;
}
