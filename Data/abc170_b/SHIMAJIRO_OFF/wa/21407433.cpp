#include "bits/stdc++.h"
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef long long ll;
int main(){
int x,y;
cin >> x >> y;
int ans_y = (y-2*x)/2;
if(ceil(ans_y)==floor(ans_y)){
if(ans_y<=x && y>=0) cout << "Yes\n";
else cout << "No\n";
}
return 0;
}
