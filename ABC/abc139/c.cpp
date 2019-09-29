#include <iostream>
#include <algorithm>
using namespace std;

int main(){
      int N,ans=0,hozon=0;
      
      cin >> N;
      
      int H[N];

      for(int i = 0;i<N;i++){
            cin >> H[i];
      }
      for(int i = 0;i<N;i++){
            for(int j = 0; j < N;j++){
                  hozon++;
                  if(H[j] < H[j+1]){
                        if(ans < hozon)ans = hozon;
                        printf("hi%d",ans);
                        break;
                  }
            }
                        
      }
      cout << ans << endl;
}
