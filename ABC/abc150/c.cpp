#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i=a; i < (b); i++)

int main() {
    int N;
    cin >> N;
    vector<int> P(N), Q(N), v(N);
    rep(i, 0, N)cin >> P[i];
    rep(i, 0, N)cin >> Q[i];
    rep(i, 0, N)v[i] = i+1;
    
    int ans_a = 0, ans_b = 0, cnt = 0;
    do {
        cnt++;
        if(v == P){
            ans_a = cnt;
        }
        if(v == Q){
            ans_b = cnt;
        }
    }while(next_permutation(v.begin(), v.end()));
    cout << max(ans_a - ans_b, ans_b - ans_a) << endl;
}