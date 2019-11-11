#include <iostream>
using namespace std;

int main(){
      int A,B;

      cin >> A >> B;

      if(A <= B + B){
            cout << 0 << endl;
      }else{
            cout << A-(B+B) << endl;
      }
      return 0;
}
