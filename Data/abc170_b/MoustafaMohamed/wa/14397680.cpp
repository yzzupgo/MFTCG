#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define sz(x) (int) (x.size())
#define Unique(x) x.erase(unique(all(x)), x.end())
#define endl "\n"
#define pb push_back
#define F first
#define S second
#define START cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
#define isOdd(n) (n&1)
#define pow(n,m) (ll)powl(n, m)
#define numOfDigits(n) ((n)? (ll)(log10(n))+1 : 1)
#define clr(x,val) memset(x, val, sizeof(x))
#define MOD 1000000007
#define EPS 1e-7
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
int main()
{
START
int x, y; cin>>x>>y;
for(int i = 1; i<=x; i++){
if(i * 2 + (x - i)*4 == y)
return cout<<"Yes", 0;
}
cout<<"No";
return 0;
}
