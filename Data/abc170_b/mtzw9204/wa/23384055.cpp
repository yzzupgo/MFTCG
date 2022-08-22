#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
#include <stack>
#include <cstring>
#include <set>
#include <utility>
#include <iostream>
#include <iomanip>
#include <list>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <unordered_set>
#include <bitset>
#include <cassert>
#include <numeric>
#include <complex>
#define FOR(i,a,b) for (ll i=(a);i<(ll)(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define SUM(v) accumulate(ALL(v),0ll)
using ll = long long;
const ll INF=1e20;
const ll eps=1;
const double pi=3.14159265359;
const ll mod=1e9+7;
using I32 = int32_t;
using I64 = int64_t;
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int ans=0;
y/=2;
if(x<=y&&y<=pow(2,x))
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
return 0;
}
