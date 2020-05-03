#include <iostream>
using namespace std;

int x(int i){
      int k=0;

      while(i > 0){
            k+=i%10;
            i/=10;
      }
      return k;
}
              

int main(){
      int N,A,B;cin >> N >> A >> B;
      int ans=0;
      for(int i=1;i<=N;i++){
            int a = x(i);
            if(a >= A && a <= B)ans+=i;
      }
      cout << ans << endl;
}
