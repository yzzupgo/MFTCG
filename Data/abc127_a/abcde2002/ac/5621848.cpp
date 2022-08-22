#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
#define rc(x) return cout<<x<<endl,0
#define pb push_back
#define in insert
#define er erase
#define fd find
#define fr first
#define sc second
typedef long long ll;
typedef long double ld;
const ll INF=0x3f3f3f3f3f3f3f3f;
const ll llinf=(1LL<<62);
const int inf=(1<<30);
const ll nmax=1e5+50;
const int mod=1e9+7;
using namespace std;
int a,b;
int main()
{
ios_base::sync_with_stdio(false);cin.tie(0);cerr.tie(0);cout.tie(0);
cin>>a>>b;
if(a>=13)rc(b);
if(a<13 && a>5)rc(b/2);
rc(0);
return 0;
}
