#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
using ll = long long;

// 座標 corrdinate と深さを保持するための構造体
struct  Cor{
    ll y;
    ll x;
    ll depth;
};

ll H, W;
ll y, x, depth;
vector<string> vec;
queue<Cor> q;

vector<ll> y_vec = {0, 0, -1, +1};
vector<ll> x_vec = {-1, +1, 0, 0};

ll bfs() {
    while (!q.empty()) {
        Cor now = q.front(); q.pop();
        y = now.y, x = now.x, depth = now.depth;

        for (ll i = 0; i < 4; ++i) {
            Cor next = {y + y_vec[i], x + x_vec[i], depth + 1};
            if (0 <= next.y && next.y <= H-1 && 0 <= next.x && next.x <= W-1 && vec[next.y][next.x] == '.') {
                vec[next.y][next.x] = 'x';
                q.push(next);
            }
        }
    }
}

int main() {
    cin >> H >> W;
    vec.resize(H);
    for (ll i=0;i<H; i++) cin >> vec[i];
    Cor start = {0, 0, 0};
    q.emplace(start);

    cout << bfs() << "\n";

    return 0;
}
