#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int N;
	cin >> N;
    vector<vector<char>> A(N, vector<char>(N));
	vector<vector<char>> B(N, vector<char>(N));

	for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> A[i][j];
        }
    }
	for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
		int d = min({i+1, j+1, N-i, N-j});
		int Ai = i, Aj = j;

		for(int i=0; i<(d%4); i++) {
            swap(Ai, Aj);
            Aj = N-1-Aj;
		}

		B[Ai][Aj] = A[i][j];
	}
    }
	for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
			cout << B[i][j];
		}
		cout << '\n';
	}
}
