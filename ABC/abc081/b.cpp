#include <iostream>
#include <algorithm>
#include <vector>
#define INF 100000000
using namespace std;

int main(){
        int N;cin >> N;
        int ans = INF;
        vector<long long> A(N);

        for(int i=0;i<N;i++){
                cin >> A[i];
        }

        for(int i=0;i<N;i++){
                int x=0;
                while(A[i]%2 == 0){
                        A[i] /= 2;
                        x++;
                }
            ans = min(ans, x);
        }
        cout << ans << endl;
}


