#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;

    int l=0;

    int ans=0;
    for(int i=0; i<N; i++){
        if(S[i] == '/'){
            int l = i-1, r = i+1;
            int l_cnt=0, r_cnt=0;
            while(l >= 0 && S[l] == '1'){
                l--;
                l_cnt++;
            }
            while(r <= N && S[r] == '2'){
                r++;
                r_cnt++;
            }
            int check=min(r_cnt, l_cnt);
            ans = max(ans, check*2 + 1);
        }
    }
    cout << ans << endl;
}
