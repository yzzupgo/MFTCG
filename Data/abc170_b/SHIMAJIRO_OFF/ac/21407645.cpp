#include "bits/stdc++.h"
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;
int main(){
int x,y;
cin >> x >> y;
double ans_y = (y-2*x)/2;
double ans_x = x - ans_y;
if(ceil(ans_y)==floor(ans_y) && ans_y>=0 && ans_x>=0){
if(2*ans_x + 4*ans_y == y) cout << "Yes\n";
else cout << "No\n";
}
else cout << "No\n";
return 0;
}
