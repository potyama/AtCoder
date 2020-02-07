#include <iostream>
using namespace std;

int main(){
	int A,B;cin >> A >> B;

	if(A == 1)A+=100;
	if(B == 1)B+=100;

	if(A>B){
		cout << "Alice" << endl;
	}else if(A < B){
		cout << "Bob" << endl;
	}else{
		cout << "Draw" << endl;
	}
}
