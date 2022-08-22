#include<bits/stdc++.h>
#define ll long long int
#define ss second
#define ff first
#define Mem(x,val) memset(x,val,sizeof x)
#define pb push_back
#define all(v) v.begin(),v.end()
#define unik(v) v.erase(unique(v.begin(),v.end()),v.end())
#define cerr(x) cerr << __LINE__ << " th Line : " << #x << " = " << x << "\n"
#define debug(a,b) cerr << #a<<" = "<<a<<"   |   "<<#b<<" = "<<b<<'\n'
#define endl '\n'
#define SZ(a) ((int)a.size())
using namespace std;
typedef pair<int, int> pi32;
typedef pair<ll, ll> pi64;
typedef vector<int> vi32;
typedef vector<ll> vi64;
typedef vector<pi32> vp32;
typedef vector<pi64> vp64;
const ll mod = 1e9 + 7;
const int MX = 1e5+7;
int main()
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int x,y;
cin>>x>>y;
if(y>=2*x and y<=4*x)cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
