#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
#define testcases freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
#define ui unsigned int
#define ll long long
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(x) (int)x.size()
#define pq priority_queue
#define pqmax priority_queue<int, vector<int>, greater<int>>
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define asc(x) sort(all(x))
#define desc(x) sort(all(x), greater<int>())
#define time_el (double)time/CLOCKS_PER_SEC
using namespace std;
const int MAX=2e6;
const ll M=1e9+7, inf=1e18;
const char nl='\n';
ll apbmc(ll a, ll b, ll c){ a%=c; ll res=1; while(b){ if(b&1) res=res*a%c; a=a*a%c; b>>=1; } return res;}
ll apb(ll x, ll y){ ll temp; if(y==0) return 1; temp=apb(x, y/2); if(y%2==0) return temp*temp; else return temp*temp*x;}
void solve(){
int x, y; cin>>x>>y;
if(2*x<=y and 4*x>=y and y%2==0 ){
cout<<"Yes";
return;
}
cout<<"No";
}
int main(){
fastio;
cout<<fixed<<setprecision(10);
solve();
return 0;
}
