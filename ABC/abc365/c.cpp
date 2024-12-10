#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define ll long long
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;

int main(){
    ll N, M; cin >> N >> M;
    vector<int> A(N);
    rep(i, 0, N)cin >> A[i];

    auto check = [&](int x){
        ll sum = 0;
        rep(i, 0, N)sum += min(x, A[i]);
        return sum <= M;
    };

    if(check(inf))cout << "infinite" << endl;
    else{
        int l = 0, r = inf;
        while(r-l > 1){
            int m = (l+r)/2;
            if(check(m))l = m;
            else r = m;
        }
        cout << l << endl;
    }
    return 0;
}