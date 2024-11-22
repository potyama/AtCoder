#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long N;
    int M;
    cin >> N >> M;
    vector<pair<long long, long long>> XA(M);
    long long total = 0;
    for(int i = 0; i<M; i++){
        cin >> XA[i].first;
    }
    for(int i = 0; i<M; i++){
        cin >> XA[i].second;
        total += XA[i].second;
    }
    if(total != N){
        cout << -1 << endl;
        return 0;
    }
    sort(XA.begin(), XA.end());
    long long ans = 0;
    int R = 0;
    if (XA[0].first != 1){
        cout << -1 << endl;
        return 0;
    }
    for(int i=0; i<M; i++){
        if(i == M){
            R += XA[i].second - (N-XA[M].first);
            if(R < 0){
                cout << -1 << endl;
                return 0;
            }
        }else{
            R += XA[i].second - (XA[i+1].first - XA[i].first);
            if(R < 0){
                cout << -1 << endl;
                return 0;
            }
        }
        ans += XA[i].second * XA[i].first;
    }

    cout << N*(N+1)/2 - ans << endl;  
}