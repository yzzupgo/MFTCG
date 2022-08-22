#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<cstdio>
#include<cmath>
#include<numeric>
#include<queue>
#include<stack>
#include<cstring>
#include<limits>
#define rep(i,a) for(int i=(int)0;i<(int)a;++i)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
using ll=long long;
static const ll mod = 1e9 + 7;
static const ll INF = 1LL << 50;
using namespace std;
struct UF {
vector<int>par;
vector<int>Rank;
UF(int n){init(n);}
void init(int n) {
par.resize(n); Rank.resize(n);
for (int i = 0; i < n; i++) {
par[i]= i;
Rank[i] = 0;
}
}
int find(int x) {
if (par[x] == x) {
return x;
}
else {
return par[x] = find(par[x]);
}
}
void unite(int x, int y) {
x = find(x);
y = find(y);
if (x == y)return;
if (Rank[x] < Rank[y]) {
par[x] = y;
}
else {
par[y] = x;
if (Rank[x] == Rank[y])Rank[x]++;
}
}
bool same(int x, int y) {
return find(x) == find(y);
}
};
int main() {
int a,b;
cin>>a>>b;
if(a<5)cout<<0<<endl;
else if(a>=13)cout<<b<<endl;
else cout<<b/2<<endl;
}
