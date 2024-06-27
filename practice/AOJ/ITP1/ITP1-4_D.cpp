#include <iostream>
int main(){

    int n;std::cin >> n;
    int min=1000000, max=-1000000;
    long long sum=0;
    for(int i=0; i<n; i++){
        int a;std::cin >> a;
        min = std::min(min, a);
        max = std::max(max, a);
        sum += a;
    }
    std::cout << min << " " << max << " " << sum << std::endl;
}