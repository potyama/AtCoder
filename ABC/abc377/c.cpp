#include <iostream>
#include <set>

using namespace std;
int main(){
    long long N;
    int M;
    cin >> N >> M;

    set<pair<int,int>> cell;
	for(int i=0; i<M; i++){
	    int a, b;
        cin >> a >> b;
		cell.insert({a, b});
		for(int i: {-1, 1}){
			for(int j: {-2, 2}){
				cell.insert({a+i, b+j});
				cell.insert({a+j, b+i});
			}
		}
	}
    long long ans = cell.size();
    for(auto x:cell){
        if(1 > x.first || 1 > x.second || x.first > N || x.second > N){
            ans--;
        }
    }

    cout << (N*N) - ans << endl;

}