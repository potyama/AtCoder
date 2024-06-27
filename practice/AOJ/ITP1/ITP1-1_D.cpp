#include <iostream>
using namespace std;

int main(){
    int S;cin >> S;
    int h,m,s;
    //h = S / 3600;
    //m = S % 3600 / 60;
    //s = S % 60;
    s = S%60;
    S /= 60;
    m = S%60;
    S /= 60;
    h = S;
    cout << h << ":" << m << ":" << s << endl;
}
