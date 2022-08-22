#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
#define pii pair <int,int>
#define pll pair <ll,ll>
#define testcase() int t; cin>>t; while(t--)
#define forn(i,n) for(int i=0;i<n;i++)
#define forn1(i,n) for(int i=1;i<=n;i++)
#define vll vector <ll>
#define vi vector <int>
#define all(v) v.begin(),v.end()
ll M = 1e9 + 7;
double pi = acos(-1.0);
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll powerm(ll x, ll y) {
ll res = 1;
while(y) {
if(y & 1) {
res = (res * x) % M;
}
y = y >> 1;
x = (x * x) % M;
}
return res % M;
}
ll power(ll x, ll y) {
ll res = 1;
while(y) {
if(y & 1) {
res = (res * x);
}
y = y >> 1;
x = (x * x);
}
return res;
}
ll gcd(ll a, ll b) {
if(b > a) {
return gcd(b, a);
}
if(b == 0) {
return a;
}
return gcd(b, a % b);
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin >> n;
n = (n * 108) / 100;
if(n < 206) {
cout << "Yay!\n";
} else if(n == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
return 0;
}
