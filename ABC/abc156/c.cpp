#include <iostream>
using namespace std;

int main(){
      int N;cin >> N;
      int X[N],L=0,M=0,ans1=0,ans2=0;
      for(int i = 0;i<N;i++){
            cin >> X[i];
            L+=X[i];
      }
      M = L/N;
      L = (double)L / (double)N + 0.999999;
      for(int i=0;i<N;i++){
            if(X[i] > L){
                  int P = X[i];
                  ans1 += (P - L) * (P - L);
            }else{
                  int P = X[i];
                  ans1 += (L - P) * (L - P);
            }
      }
      
      for(int i=0;i<N;i++){
            if(X[i] > M){
                  int P = X[i];
                  ans2 += (P - M) * (P - M);
            }else{
                  int P = X[i];
                  ans2 += (M - P) * (M - P);
            }
      }
      if(ans1 > ans2){
            cout << ans2 << endl;
      }else{
            cout << ans1 << endl;
      }
}
