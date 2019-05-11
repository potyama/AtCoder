#include <stdio.h>

int main(){
int A,B;
scanf("%d%d",&A,&B);
if(A==B){
      printf("%d",A+B);
}else if(A < B){
      printf("%d",B+(B-1));
}else{
      printf("%d",A+(A-1));
}
}
