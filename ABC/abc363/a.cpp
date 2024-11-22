#include <iostream>

int main() {
    int R;
    std::cin >> R;

    int ans = 0;

    if (R >= 1 && R <= 99) {
        ans = 100 - R;
    } else if (R >= 100 && R <= 199) {
        ans = 200 - R;
    } else if (R >= 200 && R <= 299) {
        ans = 300 - R;
    }

    std::cout << ans << std::endl;

    return 0;
}
