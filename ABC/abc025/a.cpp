#include <iostream>
#include <string>
using namespace std;

int main(){
      int N;
      string S;

      cin >> S >> N;
      
      cout << S.at((N-1)/5) << S.at((N-1)%5) << endl;
}
