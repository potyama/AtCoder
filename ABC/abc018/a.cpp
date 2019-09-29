#include <iostream>
using namespace std;

int main(){
      int A,B,C,a = 1, b = 1,c = 1;cin >> A >> B >> C;

      if(A < B)a++;
      if(A < C)a++;
      if(B < A)b++;
      if(B < C)b++;
      if(C < A)c++;
      if(C < B)c++;

      cout << a << endl << b << endl << c << endl;
}
