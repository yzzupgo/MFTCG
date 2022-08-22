#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef pair<P,ll> PLL;
typedef pair<P,P> PP;
typedef vector<ll> llVEC;
typedef vector<P> PVEC;
typedef priority_queue<P,PVEC,greater<P> > PPQ;
typedef priority_queue<ll, llVEC, greater<ll> > llPQ;
#define rep(i,a,n) for(ll i = a;i < n;i++)
#define rrep(i,a,n) for(ll i = n-1; i >= a;i--)
#define LINF (ll)1e18
#define INF (int)1e9
#define fs first
#define sc second
template<typename T>
ll sz(vector<T> &vec){ return (ll)vec.size(); }
template<typename T>
ll sz(priority_queue<T, vector<T>> &pq) {return (ll)pq.size(); }
template<typename T>
ll sz(priority_queue<T, vector<T>, greater<T>> &pq) {return (ll)pq.size(); }
ll sz(string &s) {return (ll)s.size(); }
ll gcd(ll a,ll b){ return ((!b) ?a :gcd(b, a%b)); }
ll lcm(ll a,ll b){ return a / gcd(a,b) * b; }
bool checkindex(ll i,ll n){ return (i < n && i >= 0); }
int main(){
ll n,l;
cin >> n >> l;
ll memo = LINF,minmemo = 0,sum = 0;
rep(i,1,n+1){
sum += l+i-1;
if(memo > abs(l+i-1)){
minmemo = l+i-1;
memo = abs(l+i-1);
}
}
cout << sum - minmemo << endl;
return 0;
}
