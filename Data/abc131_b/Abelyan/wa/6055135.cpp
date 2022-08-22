#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define FOR(i,a) for (int i=0;i<(a);++i)
#define FORD(i,a) for (int i=(a)-1;i>=0;i--)
#define FORT(i,a,b) for (int i=(a);i<=(b);++i)
#define FORTD(i,b,a) for (int i=(b);i>=(a);--i)
#define trav(i,v) for (auto i : v)
#define all(v) v.begin(),v.end()
#define ad push_back
#define fr first
#define sc second
#define mpr(a,b) make_pair(a,b)
#define pir pair<int,int>
#define all(v) v.begin(),v.end()
#define make_unique(v) v.erase(unique(all(v),v.end()))
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define dbg(x) ;
#define dbgv(v) ;
#define srng mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define y1 EsiHancagorcRepa
#ifdef ALEXPC
#define dbg(x) ; cout<<#x<<" = "<<x<<endl
#define dbgv(v) ; cout<<#v<<" = ["; trav(tv,v)cout<<"tv,";cout<<"]"<<endl
#endif
const ll MOD=1000*1000*1000+7;
const int N=1e6+6;
int main(){
fastio;
srng;
int n,l;
cin>>n>>l;
int sum=0;
FORT(i,l+1,l+n-1){
sum+=i;
}
cout<<sum<<endl;
return 0;
}
