#include<bits/stdc++.h>
using namespace std;
#define fir first
#define sec second
#define m_p make_pair
#define y1 ygftgfgcdtfgxffgx
#define y2 yfdsesgvtyghftfvv
#define x1 xvyr6cf6fgcfgf676
#define x2 xcr6rfc5r66y6r6fr
#define up_bound upper_bound
#define low_bound lower_bound
#define next_per next_permutation
#define pb push_back
#define i_to_s to_string
typedef priority_queue<int> p_queue;
typedef priority_queue<int, vector<int>, greater<int> > min_p_queue;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int mon[20] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
ll gcd(ll x, ll y) {
return ((y == 0) ? x : gcd(y, x % y));
}
inline int read() {
int x = 0;
char ch = getchar();
while(ch < '0' || ch > '9') {
ch = getchar();
}
while(ch >= '0' && ch <= '9') {
x = x * 10 + ch - '0';
ch = getchar();
}
return x;
}
int n;
double x;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cin >> n;
x = 1.08 * n;
n = x;
if(n < x) {
cout << "Yay!";
} else if(n == x) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
