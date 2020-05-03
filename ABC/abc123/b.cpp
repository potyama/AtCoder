#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
        vector<int>x(5);
        vector<int>n= {0, 1, 2, 3, 4};
        int ans = 0,ans2 = 999999999;
        cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4];

        for(int i =0;i < 5;i++){
              while(ans % 10 != 0)ans += 1;
              ans +=x[n[i]];
        }
        ans2 = min(ans2,ans);

        while(next_permutation(n.begin(),n.end())){
            int ans = 0;
            for(int i =0;i < 5;i++){
                    while(ans % 10 != 0)ans += 1;
                    ans +=x[n[i]];
            }
            ans2 = min(ans2,ans);
        }
        cout << ans2 << endl;
}
