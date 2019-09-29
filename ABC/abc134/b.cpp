#include <iostream>
using namespace std;

int main(){
      int N,D,ans=1,A,X,i=1;
      cin >> N >> D;

      X = N /2;
      A = (X + D) - (X - D);
      N-=A;

      while(N> 0){
            N-=(A-i);
            ans++;
            i++;
      }
      cout << ans << endl;
}
