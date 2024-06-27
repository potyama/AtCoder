#include <iostream>

int main(){
    int a, b, c;std::cin >> a >> b >> c;

    for(int i=0; ; i++){
        if (a >= b){
            int tmp_b = b;
            b = a;
            a = tmp_b;
        }else if (b >= c){
            int tmp_c = c;
            c = b;
            b = tmp_c;
        }else if (a >= c){
            int tmp_a = a;
            a = c;
            c = tmp_a;
        }
    if((a <= b) && (b <= c))break;
    }
    std::cout << a << " " << b << " " << c << std::endl;
}

/*
#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;

  if (a > b) {
    int t = a;
    a = b;
    b = t;
  }
  if (b > c) {
    int t = b;
    b = c;
    c = t;
  }
  if (a > b) {
    int t = a;
    a = b;
    b = t;
  }

  std::cout << a << " " << b << " " << c << std::endl;

  return 0;
}

*/