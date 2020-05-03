#include <iostream>
#include <string>
using namespace std;

int main(){
	string S;cin >> S;
	if(S[0] == '7' || S[1] == '7' || S[2] == '7'){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
