#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<long long> A(N);
    int ans =0;
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    while(true){
        for(int i=0; i<N; i++){
            if(A[i] % 2){
                cout << ans << endl;
                return 0;
            }
            A[i] /= 2;
        }
        ans++;
    }
}