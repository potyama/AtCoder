#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define rep(i, n) for(int i=0; i < (n); i++)

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    map<int, int> dict;
    rep(i, N) cin >> A[i];

    int ans=0;
    rep(i, 2){
        int r=i;
        for(int l = i; l+1<N; l+=2){
            while(r+1 < N){
                if(A[r] != A[r+1])break;
                if(dict[A[r]])break;
                dict[A[r]]++;
                r+=2;
            }
            ans= max(ans, r-l);
            if(l == r) r+= 2;
            else dict[A[l]]--;
        }
    }
    cout << ans << endl;
    return 0;
}