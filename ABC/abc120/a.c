#include <stdio.h>
int main(void){

      int A,B,C,x,y=0;

      scanf("%d%d%d",&A,&B,&C);
      x=A;
      for(y=0;;y++){
            if(y >= C){
                  printf("C=%d",y);
                  return 0;
            }else if(x >= B){
                  printf("B=%d",y+1);
                  return 0;
            }
            x = x + A;
            printf("%dhi\n",x);
      }
            
      printf("A=%d",y);
}
