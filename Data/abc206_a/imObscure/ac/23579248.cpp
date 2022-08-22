#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll mod = 1e9 + 7;
#define pb push_back
#define re(i,n) for(ll i=0;i<n;i++)
#define reb(i,n) for(ll i=n;i>0;i--)
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<ll, ll> mi;
typedef map<char, ll> mc;
typedef map<string, ll> ms;
typedef vector<pair<ll, ll>> vpl;
bool isprime(ll n) {
if(n == 1) {
return false;
}
if(n <= 3) {
return true;
}
if(n % 2 == 0 || n % 3 == 0) {
return false;
}
for(ll i = 5; i * i <= n; i += 6) {
if(n % i == 0 || n % (i + 2) == 0) {
return false;
}
}
return true;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ll t;
cin >> t;
if((int)(1.08 * t) < 206) {
cout << "Yay!\n";
} else if((int)(1.08 * t) > 206) {
cout << ":(\n";
} else {
cout << "so-so\n";
}
return 0;
}
