#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
      int X;
      cin >>X;
      bool ans[10000];
      ans[1] = true;

      for(int i=2;i<=1000;i++){
              for(int j=2;pow(i,j) <= 1000;j++){
                  ans[(int)pow(i,j)] = true;
              }
      }
      for(int i=X; i >=0; i--){
            if(ans[i] == true){
                  cout << i << endl;
                  break;
            }
      }
}      
