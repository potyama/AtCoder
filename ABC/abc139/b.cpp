#include <iostream>
using namespace std;

int main(){
      int ans = 0,A,B;

      cin >> A >> B;

      for(int i = 1; i < B;i--,i += A){
            ans++;
      }
      cout << ans << endl;
}
