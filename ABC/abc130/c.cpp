#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main(){

      ll w,h,x,y;cin >>w >> h >> x >> y;
      int flag=0;
      if(x+x == w && y+y == h){
            flag = 1;
      }
      double a = double(w) * double(h);
      printf("%lf %d\n",a/2,flag);
}
