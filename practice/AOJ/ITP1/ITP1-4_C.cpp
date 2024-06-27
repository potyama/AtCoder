#include <iostream>
#include <string>

int main(){
    int a, b;
    std::string op;

    while (true){
        std::cin >> a >> op >> b;

        if(op == "?")break;

        if(op == "+"){
            std::cout << a + b << std::endl;
        }else if(op == "-"){
            std::cout << a - b << std::endl;
        }else if(op == "*"){
            std::cout << a * b << std::endl;
        }else{
            std::cout << a/b << std::endl;
        }
    }
}