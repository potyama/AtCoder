#include <iostream>
using namespace std;

int main(void){
      int N,M;cin >> N >> M;
      if(M == 0){
            cout << 0 << endl;
            return 0;
      }
      if(N > M){
            cout << -1 << endl;
            return 0;
      }
      int X[N],Y[N];
      for(int i=0;i<N;i++){
            X[i] = 0;
            Y[i] = 9;
      }
      
      for(int i=0;i<M;i++){
            int s,c;cin >> s >> c;
            int flag=0;
            X[s-1] = c;
            if(i == 0){
                  for(int j=0;j<N;j++){
                        Y[j] = X[j];
                  }
            }else{
                        for(int j=0;j<N;j++){
                              if(Y[j] == 0){
                                    Y[j] = X[j];
                              }else if(Y[j] > X[j]){
                                    Y[j] = X[j];
                              }
                        }
                  }
            if(flag==1){
                  for(int j=0;i<N;j++){
                        Y[j] = X[j];
                  }
            }
      }
       
      if(Y[0]==0){
            for(int i=1;i<N;i++){
                  cout << Y[i];
                  cout << "ha";
            }
      }else if(Y[0] == 0 && Y[1] == 0){
            for(int i=2;i<N;i++){
                  cout << Y[i];
                  cout << "hi";
            }
      }else if(Y[0] == 0 && Y[1] == 0 && Y[2] == 0){
            cout << 0;
            cout << "hu";
      }
      printf("\n");
}
            
