#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define ll long long

int main(){
    int N, M;
    cin >> N >> M;
    ll A[N][M];
    rep(i, 0, N) rep(j, 0, M) cin >> A[i][j];

    ll ans = 0;
    rep(i, 0, M) rep(j, i+1, M){
        ll cnt = 0;
        rep(k, 0, N)cnt += max(A[k][i], A[k][j]);
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}