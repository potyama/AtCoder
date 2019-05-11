#include <stdio.h>
 
int main(){
 
      int i,j,a=0,b=0,N;
      scanf("%d",&N);
 
      char stone[N],hozon[N];
 
      scanf("%s",stone);
      
      for(i=0;stone[i] != '\0';i++){
            hozon[i] = stone[i];
      }
      for(i=0;stone[i] != '\0';i++){
            if(stone[i] =='#'){
                  for(j=i+1;stone[j] != '\0';j++){
                        a++;
                        printf("%c",stone[j]);
                        if(stone[j+1] == '#' || j >= N){
                              i=j;
                              break;
                        }
                  }
            }
      }
   printf("a=%d\n",a);   
      for(i=0;stone[i] != '\0';i++){
            stone[i] = hozon[i];
      }
      for(i=N;i >= 0;i--){
            if(stone[i] =='.'){
                  for(j=i;j>=0;j--){
                        b++;
                        printf("%c",stone[j]);
                        if(stone[j-1] == '#'){
                              i=j;
                              break;
                        }
                  }
            }
      }
      printf("b=%d\n",b);
      if(a < b){
            printf("%d",a);
     }else{
            printf("%d",b);
      }
}
