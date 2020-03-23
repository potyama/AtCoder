#include <iostream>
using namespace std;
long long c(long long n, long long r) {
  if (n == r || r == 0)
    return 1;
  else {
    return c(n - 1, r - 1) + c(n - 1, r);
  }
}

int main(){

      int N,M;cin >> N >> M;
      int ans=0;
      if(N == 1)N=0;
      if(M == 1)M=0;

      if(N == 2 && M == 0){
            cout << 1 << endl;
      }else if(N == 0 && M == 0){
            cout << 0 << endl;
      }else if(N ==0){
            cout << c(M,2) << endl;
      }else if(M == 0){
            cout << c(N,2) << endl;
      }else{
            cout << c(N,2) + c(M,2) << endl;
      }
}
