#include <iostream>
#include <string>
using namespace std;

int main(){
      string A,B;
      int a,b;

      cin >> A >> B;
      
      a = A.length();
      b = B.length();
      

      if(a > b){
            cout << A << endl;
      }else{
            cout << B << endl;
      }
}
      
