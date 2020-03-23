#include <iostream>
#define ll long long
using namespace std;

int main(){
      ll K,X;cin >> K >> X;
      for(ll i = X-K+1; i<=X+K-1;i++){
            cout << i << (i!=X+K-1?' ':'\n');
      }
}

