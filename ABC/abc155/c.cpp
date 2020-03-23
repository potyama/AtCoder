#include <iostream>
#include <map>
#include <string>
using namespace std;


int main(){
      map<string, int> x;
      int N;cin >> N;
      int Max=0;
      string S[N];

      for(int i=0;i<N;i++){
            cin >> S[i];
            x[S[i]] ++;
            Max = max(x[S[i]], Max);
      }
      
      for(auto i=x.begin();i != x.end();i++){
            if(i->second == Max)cout << i->first << endl;
      }
}
