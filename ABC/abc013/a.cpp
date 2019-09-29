#include <iostream>
using namespace std;

int main(){
      char X;
      int ans = 0;

      cin >> X;
      
      if(X == 'A'){
            cout << 1 << endl;
      }else{
            for(int i = 'A'; i <= X;i++)ans++;
            cout << ans << endl;
      }
}
