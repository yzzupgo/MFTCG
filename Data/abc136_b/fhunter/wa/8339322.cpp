#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <map>
#include <queue>
#define mp make_pair
#define pb push_back
#define p push
#define FOR(a,c) for(int a = 0;a<c;a++)
#define FORR(el,vecc) for(auto& el:vecc)
#define ll long long
#define abs(x) (x<0 ? (-x) : x)
#define getI(a) scanf("%d",&a)
#define getII(a,b) scanf("%d %d",&a,&b)
#define getIII(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define getL(a) scanf("%lld",&a)
#define getLL(a,b) scanf("%lld %lld",&a,&b)
#define getLLL(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define BEND(c) (c).begin(),(c).end()
#define BEND2(c) (c).begin(),(c).end(),greater<int>()
#define fi first
#define se second
#define PI 3.1415926535897932384626
#define getS(a) scanf("%s",a)
#define pfi(a) printf("%d",a);
#define pfii(a,b) printf("%d%d",a,b);
#define pfl(a) printf("%lld",a);
#define pfll(a,b) printf("%lld%lld",a,b);
#define SIZE 1000000007
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvl;
typedef vector<long long> vl;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<long long,long long>> vpl;
typedef vector<vector<pair<long long,long long>>> vvpl;
typedef vector<bool> vb;
typedef pair<int,int> pii;
typedef pair <ll,ll> pll;
const double eps = 1e-10;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MX = 200005;
ll gcd(ll n,ll m){
if (n==0)return m;
return gcd(m%n,n) ;
}
long long fast_exp(long long n,long long k){
if(k == 0)
return 1;
if(k==1)
return n;
long long temp = fast_exp(n,k>>1);
if((k&1)==1)
return (n*temp*temp)%SIZE;
return (temp*temp)%SIZE;
}
int main() {
ll n;
cin >>n;
ll count =0;
if(n >= 9)
for (ll i = 1; i <10 && i <= n; ++i) {
count++;
}
if(n >= 100)
for (int i = 100; i <=999 && i<=n ; ++i) {
count++;
}
if ( n >= 10000)
for (int j = 10000; j <=99999 && j <= n ; ++j) {
count++;
}
if(n == 10000)count++;
cout << count;
return 0;
}
