#include <iostream>

int main(){
      int A,B,T;

      std::cin >> T >> A >> B;
      
      std::cout << (A*T < B ? A*T:B) << std::endl;
}
