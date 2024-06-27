#include <iostream>

int main(){
    int x, y;
    for(int i=0; i<4000; i++){
        std::cin >> x >> y;

        if(x == 0 && y == 0)break;

        if(x > y){
            int tmp_y = y;
            y = x;
            x = tmp_y;
        }

        std::cout << x << " " << y << std::endl; 
    }
}