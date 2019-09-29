#include <iostream>
using namespace std;

int main(){
      int A,D;

      cin >> A >> D;

      if((A+1)*D < A*(D+1)){
            cout << A*(D+1) << endl;
      }else{
            cout << (A+1)*D << endl;
      }
}
