#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i=a; i <(b); i++)
int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    vector<long long> B(N);
    rep(i, 0, N)cin >> A[i];
    rep(i, 0, N)cin >> B[i];
    cout << *max_element(A.begin(), A.end()) + *max_element(B.begin(), B.end()) << endl;
}