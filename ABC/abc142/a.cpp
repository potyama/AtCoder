#include <iostream>
using namespace std;

int main(){
      double N;
      int ans=0;
      cin >> N;
      
      for(int i = 0;i< N;i+=2){
            ans++;
      }
      cout << ans/N << endl;


      return 0;
}
