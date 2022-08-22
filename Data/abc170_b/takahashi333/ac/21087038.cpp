#include <bits/stdc++.h>
#define max(p,q) ((p)>(q)?(p):(q))
#define min(p,q) ((p)<(q)?(p):(q))
#define rep(i,n) for (int i = 0; i < n; i++)
#define INF ((1LL<<62)-(1LL<<31))
#define MOD 1000000007
using ll = long long;
using namespace std;
int main(){
int x, y; cin >> x >> y;
int all;
for(int i = 0; i <=x; i++){
all = i * 2 + (x - i) * 4;
if(all == y){
cout << "Yes";
return 0;
}
}
cout << "No";
return 0;
}
