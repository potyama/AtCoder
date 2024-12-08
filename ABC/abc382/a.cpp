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
        if(S[i] == '.')cnt++;
    }
    cout << cnt + D << endl;

    return 0;
}