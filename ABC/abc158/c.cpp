#include <iostream>
#include <cmath>
using namespace std;

int main(){
      double A,B;cin >> A >> B;
      double x,y,u,v;
      x = floor(A/0.08);
      y = floor(x*0.1);
      u = floor(A/0.08)-1;
      v = floor(x*0.1)-1;
      if(B == y && B == v){
            cout << u << endl;
      }else if(B == y){
            cout << x << endl;
      }else{
            cout << -1 << endl;
      }
}

