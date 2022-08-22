#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define rep(i,n) for(ll i=0 ; i<(n) ; i++)
#define rrep(i,n) for(ll i=1 ; i<=(n) ; i++)
#define vi(a,b) vector<int> a(b)
#define vll(a,b) vector<ll> a(b)
#define vd(a,b) vector<double> a(b)
#define vs(a,b) vector<string> a(b)
#define vc(a,b) vector<char> a(b)
#define ALL(v) v.begin(),v.end()
#define rever(v) ; reverse(v.begin(), v.end());
#define sor(v) ; sort(v.begin(), v.end());
#define MAX(v) *max_element(ALL(v))
#define MIN(v) *min_element(ALL(v))
#define coutY cout<<"YES"<<endl
#define couty cout<<"Yes"<<endl
#define coutN cout<<"NO"<<endl
#define coutn cout<<"No"<<endl
void YesNo(bool a){if(a){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}}
void YESNO(bool a){if(a){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}}
#define coutdouble(a,b) cout << fixed << setprecision(a) << double(b) <<endl
#define mod 998244353
#define MOD 1000000007
int main(){
int x,y;
cin>>x>>y;
YesNo(y%2==0&&2*x<=y&&y<=4*x);
}
