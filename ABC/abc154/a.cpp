#include<iostream>
#include<string>
using namespace std;
 
int main(){
      string S,T,X;
      int a,b;
      cin >> S>>T;
      cin >> a >> b;
      cin >> X;
      
      if(S==X){
            cout << a-1 << ' ' << b << endl;
      }else {
            cout << a << ' ' << b-1 << endl;
      }
}
