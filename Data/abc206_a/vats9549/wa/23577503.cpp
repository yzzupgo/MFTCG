#include <bits/stdc++.h>
#define yy cout<<"YES"<<endl;
#define nn cout<<"NO"<<endl;
#define for0(i,n) for (int i = 0; i < (int)(n); ++i)
#define for1(i,n) for (int i = 1; i <= (int)(n); ++i)
#define forc(i,l,r) for (int i = (int)(l); i <= (int)(r); ++i)
#define forr0(i,n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forr1(i,n) for (int i = (int)(n); i >= 1; --i)
#define rep(i,a,n) for (int i = a; i < n; i++)
#define mod 1000000007
#define cl cout <<endl
#define fi first
#define se second
#define int long long
#define w(x) int x; cin>>x; while(x--)
#define endl ("\n")
#define f(i,a,n) for(int i=a; i<n; i++)
#define pb push_back
#define mi(a,b,c) min(a,min(b,c))
#define cc(r) cout<<r<<" "
#define ce(r) cout<<r<<endl
#define cn continue
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define sz(a) int((a).size())
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
int32_t main() {
ios::sync_with_stdio(false);
cin.tie(0);
cout.precision(3);
cout << fixed;
int t = 1 ;
while(t--) {
float n ;
cin >> n ;
n = n * 1.08 ;
if(n < 206) {
cout << "Yay!" ;
} else if(n == 206) {
cout << "so-so" ;
} else {
cout << ":(" ;
}
}
return 0;
}
