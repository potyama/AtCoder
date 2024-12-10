#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define ll long long
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;

int main(){
    int Q;cin >> Q;
    map<ll, int> db;
    ll cnt = 0;
    rep(i, 0, Q){
        int num;cin >> num;

        if(num == 1){
            ll add;cin >> add;
            add--;
            db[add]++;
            if(db[add] == 1)cnt++;
        }else if(num == 2){
            ll del;cin >> del;
            del--;
            db[del]--;
            if(db[del] == 0) cnt--;
        }else{
            cout << cnt << endl;
        }
    }
    return 0;
}