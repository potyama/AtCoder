#include <iostream>
#include <string>
#include <algorithm>

bool is_palindrome(const std::string& T) {
    int l = T.size();
   for (int i = 0, j = l-1; i < j; ++i, --j) {
        if (T[i] != T[j]) return false;
    }    
    return true;
}

int f(std::string S, int K) {
    int N = S.size();
    int cnt = 0;

    std::sort(S.begin(), S.end());
    do { 
        bool flag= false;
        for (int i = 0; i <= N - K; ++i) {
            if (is_palindrome(S.substr(i, K))) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            cnt++;
        }
    } while (std::next_permutation(S.begin(), S.end()));

    return cnt;
}

int main() {
    int N, K;
    std::string S;

    std::cin >> N >> K >> S;

    std::cout << f(S, K) << std::endl;

    return 0;
}


