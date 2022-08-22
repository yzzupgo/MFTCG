#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <cctype>
#include <string>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=ll(b);i--)
#define FORA(i,I) for(const auto& i:I)
#define ALL(x) x.begin(),x.end()
#define SIZE(x) ll(x.size())
#define INF32 2147483647
#define INF64 9223372036854775807
#define MOD 1000000007
#define F first
#define S second
#define coutALL(x) for(auto i=x.begin();i!=--x.end();i++)cout<<*i<<" ";cout<<*--x.end()<<endl;
#define coutall(x) {for(int i=0;i<sizeof(x)/sizeof(x[0]);i++){cout<<x[i]<<"|";};};cout<<endl;
ll myceil(ll a,ll b){return (a+(b-1))/b;}
ll myfloor(ll a,ll b){return a/b;}
ll keta(ll x){
if(x==0){return 0;};
return 1+keta(x/10);
}
signed main(){
ll n,c;cin>>n;
FOR(i,1,n){
c+=keta(i)%2;
};
cout<<c;
}
