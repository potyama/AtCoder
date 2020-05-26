#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define rep(i, n) for (int i = 0; i <= (int)(n); i++)
#define ll long long
using namespace std;

int main(){
	int a,b,c,x;cin >> a >> b >> c >> x;
	int ans=0;
	for(int i=0;i<=a;i++){
		for(int j=0;j<=b;j++){
			for(int k=0;k<=c;k++){
				int check = 500*a + 100*b + 50*c;
				if(check == x){
					ans++;
				}
			}
		}
	}
	cout << ans << endl;

	
}

