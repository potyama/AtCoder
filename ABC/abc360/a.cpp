#include <iostream>
using namespace std;

int main(){
    string m; cin >> m;
    int cnt_r=0, cnt_m=0;
    for(int i=0; i<3; i++){
        if(m[i] == 'R'){
            cnt_r = i;
        }else if(m[i] == 'M'){
            cnt_m = i;
        }
    }
    if(cnt_r < cnt_m){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}