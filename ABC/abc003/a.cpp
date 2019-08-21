#include <iostream>
using namespace std;

int main(){
      int N,ans = 0;

      cin >> N;

      for(int i = 1; i <= N ; i++){
            ans += (10000 * i);
      }
      ans /= N;
      cout << ans << endl;
}
