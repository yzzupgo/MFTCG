#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include <algorithm>
using namespace std;
#define mem(a,b) memset(a,b,sizeof a)
#define PII pair<int,int>
#define ll long long
#define ull unsigned long long
#define ft first
#define sd second
#define endl '\n'
#define PI acos(-1.0)
#define lcm(a,b) a/gcd(a,b)*b
#define INF_INT 0x3f3f3f3f
#define debug(a) cout<<#a<<"="<<a<<endl;
int gcd(int a, int b) {
return b ? gcd(b, a % b) : a;
}
int exgcd(int a, int b, int &x, int &y) {
if(!b) {
x = 1;
y = 0;
return a;
}
int d = exgcd(b, a % b, y, x);
y -= (a / b) * x;
return d;
}
ll qmi(ll m, ll k, ll p) {
ll res = 1 % p, t = m;
while(k) {
if(k & 1) {
res = res * t % p;
}
t = t * t % p;
k >>= 1;
}
return res;
}
const int N = 1e6 + 7;
int n, m;
void solve() {
cin >> n;
double ans = 1.08 * n;
if(ans > 206) {
puts("Yay!");
} else if(ans == 206) {
puts("so-so");
} else {
puts(":(");
}
}
int main() {
cin.tie(0);
cout.tie(0);
ios_base::sync_with_stdio(0);
int T = 1;
while(T--) {
solve();
}
return 0;
}
