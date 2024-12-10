#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define ll long long

int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    rep(i, 0, N)cin >> A[i];

    ll ans=0;
    int r = 0;
    rep(l, 0, N){
        while(r < N){
            if (r > l+1 && A[r] - A[r-1] !=  A[r-1] - A[r-2])break;
            r++;
        }
        ans += r-l;
    }
    cout << ans << endl;
    return 0;
}