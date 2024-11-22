#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, T, P;
    std::cin >> N >> T >> P;

    std::vector<int> L(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> L[i];
    }

    int cnt = 0;

    std::sort(L.begin(), L.end(), std::greater<int>());
    int ans = std::max(0, T - L[P - 1]);
    std::cout << ans << std::endl;

    return 0;
}

