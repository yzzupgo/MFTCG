#include<bits/stdc++.h>
#define int long long
using namespace std;
#define Y cout << "YES" << "\n";
#define N cout << "NO" << "\n";
#define pb push_back
#define lowestbit(x) __builtin_ffs(x)
#define highestbit(x) __builtin_clz(x)
#define is(x) cerr << #x << " is " << x << endl;
#define sortv sort(v1.begin(),v1.end());
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define inputarr loop(i,0,n) cin>>ar[i];
int mod = 1e9 + 7;
int inf = 1e18;
int mx = -1;
int mn = 1e18;
int calpow(int a, int b, int md) {
int mul = 1;
while(b > 0) {
if(b & 1) {
mul = ((a % md) * (mul % md)) % md;
b--;
} else {
a = ((a % md) * (a % md)) % md;
b /= 2;
}
}
return mul;
}
void solve() {
int i, j, n, t, q, a, b, m, k, ct = 0, sum = 0, flag = 0;
double c;
cin >> c;
j = (1.08 * c);
if(j < 206) {
cout << "Yay";
} else if(j == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
signed main() {
ios::sync_with_stdio(false);
cin.tie(NULL);
int t = 1;
while(t--) {
solve();
cout << "\n" ;
}
cerr << endl << clock() * 1000.0 / CLOCKS_PER_SEC << 'm' << 's';
return 0;
}
