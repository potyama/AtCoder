#include <iostream>
#include <algorithm>
using namespace std;

int main(){
      int a,b,c;cin >> a >> b >> c;
      int A = a + b;
      int B = a + c;
      int C = b + c;
      cout << min({A,B,C}) << endl;
}
