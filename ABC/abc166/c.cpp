#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define P pair<int, int>
#define ll long long
#define x 100010

using namespace std;

int main(){
	cin.tie(0);
	
	int n,m;cin >> n >> m;

	int h[x],c[x];
	for(int i=1;i<=n;i++){
		cin >> h[i];
		c[i]=0;
	}

	rep(i, m){
		int a,b;cin >> a >> b;
		c[a]=max(c[a],h[b]);
		c[b]=max(c[b],h[a]);
	}

	int sum=0;
	for(int i=1;i<=n;i++){
		if(h[i] > c[i]){
			sum++;
		}
	}
	cout << sum << endl;

}

