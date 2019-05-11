#include <iostream>

int main(){
      int x,a,b,c;
      std::cin >> x >> a >> b;

      x++;
      std::cout << x << std::endl;
      x *= (a+b);
      std::cout <<  x << std::endl;
      c = x * x;
      std::cout << c << std::endl;
      c -= 1;
      std::cout << c << std::endl;
}
