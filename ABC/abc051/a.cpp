#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;cin >> s;

	for(int i=0;s[i]!='\0';i++){
		if(s[i] == ',')s[i] = ' ';
	}
	cout << s << endl;
}

