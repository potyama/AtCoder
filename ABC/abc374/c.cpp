#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, a, b) for(int i=a; i < (b); i++)

int main(){
    int N;
    cin >> N;
    vector<int> K(N);

    rep(i, 0, N)cin >> K[i];

    int ans= 1e9;
    rep(s, 0, 1<<N) {
        int a=0, b=0;
        rep(i, 0, N){
            if(s>>i&1)b += K[i];
            else a += K[i];
        }
        ans = min(ans, max(a, b));
    }
    cout << ans << endl;
    return 0;
}
