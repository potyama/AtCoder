#include <iostream>
using namespace std;

int main(){
      int ans=0,N;

      cin >> N;

      for(int i = N; i > 0;i -= 2)ans++;
      cout << ans << endl;
}
