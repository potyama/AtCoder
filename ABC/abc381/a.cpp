#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;

    if((N%2) == 0 || S[N/2] != '/'){
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < N/2; i++) {
        if (S[i] != '1') {
            cout << "No" << endl;
            return 0;
        }
    }
    for (int i = (N/2) + 1; i < N; i++) {
        if (S[i] != '2') {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
