#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define erep(i, a, b) for(int i=a; i<=(b); i++)
#define ll long long
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;

int N, K;
int R[8];
int tmp[8];

void sol(int depth){
    if(depth == N){
        int sum = 0;
        rep(i, 0, N)sum += tmp[i];
        if(sum % K == 0){
            rep(i, 0, N)cout << tmp[i] << " ";
        }
        cout << endl;
        return;
    }
    erep(i, 1, R[depth]){
        tmp[depth] = i;
        sol(depth + 1);
    }
}


int main(){
    cin >> N >> K;
    rep(i, 0, N)cin >> R[i];
    sol(0);
    return 0;
}