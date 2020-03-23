#include <iostream>
#define ll long long
using namespace std;

int main(){
      ll s,ans=0;cin >> s;
      
      while(s != 4 && s != 2 && s != 1){
      if(s%2==0)s/=2;
      else s = (s*3)+1;
      ans++;
      }
      cout << ans+4 << endl;
}
      
