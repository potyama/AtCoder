#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){
      string S; cin >>S ;
      string X;
      int N,i=0;

      N=S.size();
      for(i=0;i<N;i++){
            X[N-(i+1)]=S[i];
      }
      X[i+1]='\0';
      S[i+1]='\0';

      for(int j=0;j<N;j++){
            if(S[j]!=X[j]){
                  cout << "No" << endl;
                  return 0;
            }
      }
     int x = ((N-1)/2);
      if(x == 2)x++;
      for(int k=0;k<x;k++){
//      cout << S[k] << ":" << k << "->" << X[(x-k)-1] << ":" << (x-k)-1 << endl; 
            if(S[k]!=X[(x-k)-1]){
                  cout << "No" << endl;
                  return 0;
            }
      }
      int l = ((N+3)/2);
      if(l == 4)l--;  
      for(int i=0;l<N;l++){
  //    cout << S[l] << ":" << l << "->" << X[(N-l)-1] << ":" << (N-l)-1 << endl; 
            if(S[l]!=X[(N-l)-1]){
                  cout << "No" << endl;
                  return 0;
            }
            i++;
      }
      cout << "Yes" << endl;
      return 0;
}
