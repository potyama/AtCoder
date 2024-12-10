#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define rep(i, a, b) for(int i=a; i<(b); i++)
#define ll long long

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, 0, N)cin >> A[i];

    ll T = 0;
    for (int a : A) {
        int cnt = a / 5;
        T += cnt * 3;
        a -= cnt * 5;

        while (a > 0) {
            T++;
            if (T % 3 == 0) a -= 3;
            else a -= 1;
        }
    }

    cout << T << endl;
    return 0;
}
