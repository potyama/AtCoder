#include <iostream>

int main(){
      int A,B,C,D;
      
      std::cin >> A >> B >> C >> D;
      
      if((A+B)-(C+D) == 0)std::cout << "Balanced" << std::endl;

      else std::cout << ((A+B)-(C+D) > 0 ? "Left":"Right" ) << std::endl;
}
