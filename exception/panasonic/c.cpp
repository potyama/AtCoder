#include <iostream>
#define  ll long long
using namespace std;

int main(){
      ll a,b,c;cin >> a >> b >> c;

      if(c-a-b > 0 && (c-a-b) * (c-a-b) > 4 * a * b){
            cout << "Yes" << endl;
      }else{
            cout << "No" << endl;
      }
}
