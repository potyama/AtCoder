#include <iostream>
char N[5];
int main(){
      
      std::cin >> N;
      if(N[0] == N[1] && N[1] == N[2] || N[1] == N[2] && N[2] == N[3])puts("Yes");
      else puts("No");
}
