#include <iostream>
using namespace std;

int main(){
      int N;
      cin >> N;

      if(N == 100){
            printf("Perfect\n");
      }else if(N < 60){
            printf("Bad\n");
      }else if(N < 90 && N >= 60){
            printf("Good\n");
      }else{
            printf("Great\n");
      }
}
