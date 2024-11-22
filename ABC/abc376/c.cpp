#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N-1);

    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=0; i<N-1; i++){
        cin >> B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (int i=0; i<N-1; i++) {
        if (A[i] > B[i]) {
            cout << -1 << endl;
            return 0;
        }
    }
    for (int i=N-1; i>=0; i--) {
        if (A[i+1] > B[i]) {
            cout << A[i+1] << endl;
            return 0;
        }
    }
    cout << A[0] << endl;
}