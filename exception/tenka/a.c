#include <stdio.h>
#include <stdlib.h>
int main(void){

      int A,B,C,i;

      scanf("%d%d%d",&A,&B,&C);

      if(A < B){
            for(i = A; i <= B; i++){
                  if( i == C){
                        printf("Yes");
                        exit(0);
                  }
            }
      }else if(A > B){
            for(i = A; i >= B; i--){
                  if(i == C){
                        printf("Yes");
                        exit(0);
                  }
            }
      }
            printf("No");
}
