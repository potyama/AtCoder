#include <iostream>
#include <algorithm>
#include <vector>
#define INF 1000000000
using namespace std;

int main(){
      int N,K;cin >> N >> K;
      vector<long long> h(N);
      for(int i=0;i<N;i++){
            cin >> h[i];
      }
      
      sort(h.begin(), h.end());

      long long ans = INF;
      for(int i = 0;(i+K-1)<N;i++){
            ans = min(ans, h[i+K-1] - h[i]);
      }
      cout << ans << endl;
}
