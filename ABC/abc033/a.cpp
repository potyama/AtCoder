#include <iostream>
using namespace std;

int main(){
      int N;

      cin >> N;

      if(N%1111 == 0 || N == 0){
            cout << "SAME" << endl;
      }else{
            cout << "DIFFERENT" << endl;
      }

}
