#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define re(i,a,b) for(int i=a;i<b;i++)
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define ln "\n"
#define mod 1000000007
using namespace std;
int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
void prtn(ll i) {
cout << i << ln;
}
pii solve1(ll d, ll k) {
ll p = __gcd(d, k);
d /= p;
k /= p;
return {d, k};
}
void solve() {
double n;
cin >> n;
double ans = 1.08 * n;
ans = floor(ans);
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int main() {
int t = 1;
cin >> t;
while(t--) {
solve();
}
}
