#include <iostream>
using namespace std;

int main(){
      int S,T;

      cin >> S >> T;

      cout << (S == T == 1 ? 1:(T-S)+1) << endl;
}
