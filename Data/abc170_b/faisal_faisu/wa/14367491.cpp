#include<bits/stdc++.h>
using namespace std;
#define bit(a) __builtin_popcount(a)
#define all(x) x.begin(), x.end()
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),v.erase(unique(all(v)),v.end())
#define w(x) while(x--)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define ll long long
#define pb push_back
#define vii vector<int>
#define vll vector<ll>
#define vcc vector<char>
#define sii set<int>
#define sll set<ll>
#define scc set<char>
#define li list<int>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mii map<int,int>
#define mll map<ll,ll>
#define fill(arr,x) memset(arr,x,sizeof(arr))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define srtc(a,b) sort(a,a+b,greater<int>())
#define pi acos(-1.00)
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t;
string s;
int main()
{
_ios;
ll x,y;
cin>>x>>y;
if(y>=x*2&&y<=x*4)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
