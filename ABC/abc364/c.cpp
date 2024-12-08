#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define ll long long
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;

int main(){
    int N;cin >> N;
    ll X, Y;cin >> X >> Y;
    vector<ll> A(N), B(N);
    rep(i, 0, N)cin >> A[i];
    rep(i, 0, N)cin >> B[i];
    ll cnt_a=0, cnt_b=0, sum_a=0, sum_b=0;
    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());
    rep(i, 0, N){
        if(sum_a > X)break;
        sum_a += A[i];
        cnt_a++;
    }
    rep(i, 0, N){
        if(sum_b > Y)break;
        sum_b += B[i];
        cnt_b++;
    }
    cout << min(cnt_a, cnt_b) << endl;
    return 0;
}