#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define pb push_back
#define vi veansor<int>
#define v2d(n,m,tname,type) veansor<veansor<type>>tname(n+1,veansor<type>(m+1,0))
#define loop(name,tempartpointer,n) for(int name=tempartpointer;name<n;name++)
#define mod 1000000007
#define mod1 1e9
#define mem0(a) memset(a,0,sizeof(a))
#define mem1(a) memset(a,-1,sizeof(a))
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define log(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
cout << *it << " = " << a << endl;
err(++it, args...);
}
int x8[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y8[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int x4[4] = {0, 0, -1, 1};
int y4[4] = {1, -1, 0, 0};
int power(int a, int b) {
int res = 1;
if(a == 0) {
return a;
}
if(b == 0) {
return 1;
}
a = a % mod;
while(b > 0) {
if(b & 1) {
res = (res * a) % mod;
}
a = (a * a) % mod;
b >>= 1;
}
return res;
}
void solve() {
int n;
cin >> n;
int x = (int)(1.08 * n);
if(x > 206) {
cout << ":(";
} else if(x == 206) {
cout << "so-so";
} else {
cout << "yay!";
}
}
signed main() {
fastio;
int test = 1;
while(test--) {
solve();
}
}
