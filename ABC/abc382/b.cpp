#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define ll long long

int main(){
    int N, D;
    cin >> N >> D;
    vector<char> S(N);
    int cnt = 0;
    rep(i, 0, N){
        cin >> S[i];
    }
    rep(i, 0, D){
        for(int i = N-1; i >= 0; i--){
            if(S[i] == '@'){
                S[i] = '.';
                break;
            }
        }
    }
    rep(i, 0, N)cout << S[i];
    cout << endl;

    return 0;
}