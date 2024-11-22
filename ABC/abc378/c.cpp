#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    map<int, int> M;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i=0; i<N; i++){
        if(M.count(A[i])){
            B[i] = M[A[i]];
        }else{
            B[i] = -1;
        }
        M[A[i]] = i+1;
    }
    for(int i = 0; i < N; i++){
        cout << B[i] << ' ';
    }
    cout << endl;
    return 0;
}