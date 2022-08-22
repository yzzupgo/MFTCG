#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<list>
#include<vector>
#include<bitset>
#include<unordered_map>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fio ios_base::sync_with_stdio(false)
#define mod 998244353
#define mod1 mod
#define mod2 1000000007
#define li long long int
#define ll li
#define readi(x) scanf("%d",&x)
#define reads(x) scanf("%s", x)
#define readl(x) scanf("%I64d",&x)
#define rep(i,n) for(i=0;i<n;i++)
#define revp(i,n) for(i=(n-1);i>=0;i--)
#define myrep1(i,a,b) for(i=a;i<=b;i++)
#define myrep2(i,a,b) for(i=b;i>=a;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
#define MAXN 1000000000010000005
#define MINN -1000000000000000000
#define INTMAX 1000001000
#define pii pair<ll,ll>
#define pdd pair<double,double>
#define pic pair<int,char>
#define N 200105
#define lgn 20
#define ddouble long double
#define minus minu
#define PI 2*acos(0)
#define lgn 20
using namespace std;
using namespace __gnu_pbds;
typedef priority_queue<pii, vector<pii > > max_pq;
typedef priority_queue<pii, vector<pii> , greater<pii> > min_pq;
ll toint(const string &s) {stringstream ss; ss << s; ll x; ss >> x; return x;}
string tostring ( ll number ){stringstream ss; ss<< number; return ss.str();}
typedef tree<pair<string,string> , null_type, less<pair<string,string> >, rb_tree_tag, tree_order_statistics_node_update> OST;
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
cout << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif
#define nn 2000005
ll ar[ 6 ];
int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL);
ll x,y;
cin >> x >> y;
if ( (4*x-y)>=0 and (4*x-y)%2 == 0 ){
cout <<"Yes";
}
else{
cout <<"No";
}
}
