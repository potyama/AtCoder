#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;
    int ans=0;
    for(int i=0; i<S.length(); i++){
        if(S[i]== '1')ans++; 
    }
    cout << ans << endl;
}