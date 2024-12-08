#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define ll long long

int main(){
    int n, x;
    int ans=0;
    while(true){
        cin >> n >> x;
        if(n == 0 && x == 0)break;
        rep(i, 1, n+1){
            rep(j, i+1, n+1){
                rep(k, j+1, n+1){
                    if(i+j+k == x)ans++;
                }
            }
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}