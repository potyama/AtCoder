#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    vector<int> W(N);
    for(int i=0; i<N; i++){
        cin >> W[i];
    }
    
    sort(A.begin(), A.end());
    sort(W.begin(), W.end());
    int cnt=0, ans=0;
    for(int i=0; i<=N-1; i++){
        cout << "Check:" << A[i]<<"-"<<W[i] << "-" << cnt << endl;;
        if(A[i] != A[i+1]){
            if(cnt != 0){
                vector<int> W_tmp(cnt);
                for(int j=i-cnt; j<=i; j++){
                    W_tmp[j] = W[j];
                    cout << cnt << " " << W_tmp[j] << j << endl;
                }
                sort(W_tmp.begin(), W_tmp.end());
                cout << W_tmp[0] << endl;
                for(int k=0; k<cnt; k++){
                    cout << ans + W_tmp[k] << endl;
                    ans += W_tmp[k];
                }
                cnt = 0;
                cout << "nowans=" << ans << endl;
            }
        }else{
            cnt++;
        }
    }
    cout << ans << endl;  
}