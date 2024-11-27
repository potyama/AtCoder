#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define ll long long

bool check(string &S, int i){
    if(i < 0)return false;
    if(S.substr(i, 3) == "ABC")return true;
    return false;
}

int main(){
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    int ans=0;
    rep(i, 0, N-2){
        if(check(S, i))ans++;
    }
    rep(i, 0, Q){
        int x;
        char c;
        cin >> x >> c;
        x--;
        //before
        if(check(S, x-2))ans--;
        if(check(S, x-1))ans--;
        if(check(S, x))ans--;

        S[x] = c;
        //after
        if(check(S, x-2))ans++;
        if(check(S, x-1))ans++;
        if(check(S, x))ans++;

        cout << ans << endl;
    }
    return 0;
}