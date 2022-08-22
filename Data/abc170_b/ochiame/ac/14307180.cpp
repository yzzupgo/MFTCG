#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define cout(x) cout<<x<<endl
#define all(v) v.begin(), v.end()
using namespace std;
using vi = vector<int>;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
const ll inf = 1e18;
const int N = 2e5 + 10;
int main(){
int x,y;
cin >> x >> y;
bool can = false;
for(int i=0; i<=x; ++i){
for(int j=0; j<=x-i; ++j){
if(i+j==x && 2*i+4*j == y){
can = true;
break;
}
}
if(can) break;
}
if(can) cout("Yes");
else cout("No");
return 0;
}
