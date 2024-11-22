#include <iostream>

int main(){
    while (true){
        int h, w;std::cin >> h >> w;
        if(h == 0 and w == 0)break;

        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                std::cout << "#";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}