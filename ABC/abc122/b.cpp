#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define ll long long

int main(){
    string S;
    cin >> S;
    
    int cnt=0, ans=0;
    rep(i, 0, S.size()+1){
        if(S[i] == 'A' || S[i] == 'T' || S[i] == 'G' || S[i] == 'C'){
            cnt++;
            rep(j, i+1, S.size()+1){
                if(S[j] == 'A' || S[j] == 'T' || S[j] == 'G' || S[j] == 'C')cnt++;
                else break;
            }
        }
        ans = max(ans, cnt);
        cnt = 0;
    }
    cout << ans << endl;
    return 0;
}