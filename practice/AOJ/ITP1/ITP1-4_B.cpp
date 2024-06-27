#include<iostream>
#include<iomanip>
#include<math.h>

int main(){
    double r;std::cin >> r;
    double area, circuit;
    area = M_PI * r * r;
    circuit = 2 * M_PI * r; 
    std::cout << std::fixed << std::setprecision(5);

    std::cout << area << " " << circuit << std::endl;
}