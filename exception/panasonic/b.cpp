#include <iostream>
#define ll long long
using namespace std;

int main(){

      ll W,H;cin >> H >> W;
      
      if(W == 1 || H == 1){
            cout << 1 << endl;
      }else{
            cout << (W * H + 1)/2 << endl;
      }
}

