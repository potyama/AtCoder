#include <stdio.h>
int main(){
      int i,j=0,k=0,N;

      scanf("%d",&N);
      char s[N+1];
      scanf("%s",s);

      for(i=0;s[i]!='\0';i++){
            if(s[i]=='R'){
                  j++;
            }else{
                  k++;
            }
      }
      if(j>k){
            printf("Yes");
      }else{
            printf("No");
      }
}
