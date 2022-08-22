#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ld;
#define for0(i,n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i,n) for (ll i = 1; i <= (ll)(n); ++i)
#define forc(i,l,r) for (ll i = (ll)(l); i <= (ll)(r); ++i)
#define forr0(i,n) for (ll i = (ll)(n) - 1; i >= 0; --i)
#define forr1(i,n) for (ll i = (ll)(n); i >= 1; --i)
#define ff first
#define ss second
#define pb push_back
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ll a,b;
ll c;
c = max(a+b,a-b);
c = max(c,a*b);
cout << c << endl;
return 0;
}
