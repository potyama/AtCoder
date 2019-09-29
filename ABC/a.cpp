#include <iostream>
#include <string>
using namespace std;

int main(){
      string S;
      cin >> S;

      if(S == "Sunny"){
            printf("Cloudy\n");
      }else if(S == "Cloudy"){
            printf("Rainy\n");
      }else{
            printf("Sunny");
      }
}
