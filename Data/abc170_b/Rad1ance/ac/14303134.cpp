#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define me memset
const int N = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 0x3f3f3f3f;
using namespace std;
typedef pair<int,int> PII;
typedef pair<ll,ll> PLL;
int x,y;
int main() {
ios::sync_with_stdio(false);cin.tie(0);
cin>>x>>y;
bool ok=0;
for(int i=0;i<=x;++i){
if(i*2+(x-i)*4==y){
ok=1;
break;
}
}
if(ok) cout<<"Yes";
else cout<<"No";
return 0;
}
