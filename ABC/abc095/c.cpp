#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define ll long long
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;

int main(){
    int A,B,C,X,Y;
    cin >> A >> B >> C >> X >> Y;
    int ans=inf;
    rep(i, 0, max(X, Y)*2 + 1){
        int sum = C * i;
        int a = X - i/2;
        int b = Y - i/2;

        if(a > 0)sum += a * A;
        if(b > 0)sum += b * B;
        ans = min(ans, sum);
    }
    cout << ans << endl;
    return 0;
}