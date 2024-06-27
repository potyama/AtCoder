#include <iostream>
#include <iomanip>

int main(){
    int a, b;std::cin >> a >> b;
    int d = a / b;
    int r = a % b;
    double f = (double)a / b;
    //std::fixedを指定しないと，setprecisionの指定した長さが整数部も含むことになるらしい
    std::cout << std::fixed << std::setprecision(5);
    std::cout << d << " " << r << " " << f << std::endl;
}