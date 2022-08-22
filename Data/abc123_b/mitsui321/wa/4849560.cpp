#include <bits/stdc++.h>
 
using namespace std;
 
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,s,n) for(int i=(s);i<(n);i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)
#define REPR(i,s,n) for(int i=(s);i>=(n);i--)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define pvec(v) rep(i,v.size()){cout << v[i] << " ";};cout<<endl;
#define pb push_back
#define pf push_front
#define mod 1e9+7
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef vector<ll> vll;

const double pi = acos(-1.0);
 
ll gcd(ll x, ll y) { return (y == 0) ? x : gcd(y, x % y); }
ll lcm(ll x, ll y) { return x / gcd(x, y) * y; }

int main()
{
	int a,ans=0,tmp=10;
	bool b=true;
	rep(i,5){
		cin >> a;
		if(a%10!=0){
			tmp=min(tmp,a%10);
			a+=(10-a%10);
			b=false;
		}
		ans+=a;
	}
	if(b) tmp=0;
	cout << ans-(10-tmp) << endl;
	return 0;
}
