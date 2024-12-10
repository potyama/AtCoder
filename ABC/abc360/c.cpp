#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define rrep(i, a, b) for(int i=a; i<=(b); i++)
#define ll long long
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;

int main(){
    int N;cin >> N;
    vector<int> A(N), W(N);
    rep(i, 0, N)cin >> A[i];
    rep(i, 0, N)cin >> W[i];
    vector<int> tmp(N);
    rep(i, 0, N){
        A[i]--;
        tmp[A[i]] = max(tmp[A[i]], W[i]);
    }
    int sum_max = accumulate(tmp.begin(), tmp.end(), 0);
    int sum = accumulate(W.begin(), W.end(), 0);
    cout << sum - sum_max << endl;
    return 0;
}