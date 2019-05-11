#include <stdio.h>

int main(){
      int N,L,a=0,x,y,i;

      scanf("%d",&N);

      for(i=0;i<=N;i++){
            scanf("%d",&x);
            if(a<x && i==0){
                a=x;  
            
            } else if(a<x) {
                  y+=a;
                  a=x;
                  
            }else{
                  y+=x;
            }
      }
      if(y>a){
            printf("Yes");
      }else{
            printf("No");
      }
}      
      
