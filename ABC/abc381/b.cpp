#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string S;
    cin >> S;
    int T=0;
    T = S.length();
    if((T%2) == 1){
        cout << "No" << endl;
        return 0;
    }

    map<char, int> dict;
    for(auto i: S){
        dict[i]++;
    }
    for(auto i=0; i<T; i++){
        if(dict[S[i]] != 2){
            cout << "No" << endl;
            return 0;
        }
    }
    for(int i=0; i<T; i+=2){
        if(S[i] != S[i+1]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
