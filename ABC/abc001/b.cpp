#include <iostream>
using namespace std;

int main(){
      int  m;
      cin >> m;
      if(m <= 100){
            cout << "00" << endl;
      }else if(m >= 70000){
            cout << 89 << endl;
      }else if(m >= 6000 && m <= 30000){
            cout << m + 50 << endl;
      }else if(m >= 35000 && m <= 70000){
            cout << ((m-30)/5) + 80 << endl;
      }else if(m >= 100 && m < 1000){
             cout << 0 << m/100 << endl;
      }else{
             cout << m/100  << endl;
      }
}
