#include <iostream>
using namespace std;

int main(){
      int N,X;
      int L,j=0,c=0;

      cin >> N >> X;
      for(int i = 0;i < N;i++){
            cin >> L;
            j += L;
            if(j > X){
                  break;
            }
            c++;
      }

      if(c != 0 && j > X){
            cout << c+1 << endl;
      }else{
            cout << 1 << endl;
      }
}
