#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)

int main(){
    string S, T;
    cin >> S >> T;
    int N = S.size();

    vector<string> ans;
    while(S != T){
        string now;
        rep(i, 0, N){
            if(S[i] != T[i]){
                string S_tmp = S;
                S_tmp[i] = T[i];
                if (now == "") now = S_tmp;
                else now = min(now, S_tmp);
            }
        }
        S = now;
        ans.push_back(S);
    }

    cout << ans.size() << endl;
    for(string S: ans) cout << S << endl;
    return 0;
}