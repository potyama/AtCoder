#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define ll long long

int main(){
    int N;
    int cnt=0, ans=0;
    cin >> N;

    rep(i, 0, N+1){
        if(!(i%2))continue;
        rep(j, 1, i+1){
            if(i % j == 0)cnt++;
        }
        if(cnt == 8)ans++;
        cnt = 0;
    }
    cout << ans << endl;
    return 0;
}