#include <iostream>
#include <algorithm>
using namespace std;

int main(){
      int N;
      double ans=0,ans2=0;
      cin >> N;
      
      double  X[N];

      for(int i=0;i < N;i++){
            int x;
            cin >> x;
            X[i] = x;
      }
      sort(X,X+N);
      if(N == 2){
            ans = (X[0] + X[1])/2;
            cout << ans << endl;
      }else{
            ans = (X[0] + X[1])/2;
            ans2 = (ans + X[N-1]); 
            ans2/=2;
            cout << ans2 << endl;
      }
}
