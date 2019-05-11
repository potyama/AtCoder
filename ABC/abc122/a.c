#include <stdio.h>

int main(){
      int b;

      scanf("%lc",&b);

      if('A'==b){
            printf("T");
      }else if('T'==b){
            printf("A");
      }else if('C'==b){
            printf("G");
      }else{
            printf("C");
      }
}
