#include <stdio.h>

int main(){

      int A,B,T,i=0,j=0;

      scanf("%d%d%d",&A,&B,&T);

      for(i=1;(i*A)+0.5 <= T || (i*A) <= T;i++){
            j += B;
      }
      printf("%d",j);
}
