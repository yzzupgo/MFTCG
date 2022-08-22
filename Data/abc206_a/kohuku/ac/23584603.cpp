#include<bits/stdc++.h>
using namespace std;
#define arep(i,x,n) for(int i=int(x);i<(int)(n);i++)
#define rep(i,n) for(ll i = 0;i < (ll)n;++i)
#define rrep(i,n) for(int i=int(n-1);i>=0;i--)
#define fs first
#define sc second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define coy cout<<"Yes"<<endl
#define con cout<<"No"<<endl
#define pi 3.141592653589793
#define eps 0.00000001
#define INF 1e9+7
#define LINF (ll)1e18+10
using ll = long long;
using P = pair<ll, ll>;
using fP = pair<double, double>;
using PPI = pair<P, int>;
using PIP = pair<int, P>;
using Ps = pair<int, string>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vd = vector<double>;
using vs = vector<string>;
using vp = vector<P>;
using vb = vector<bool>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<ll>>;
using vvd = vector<vector<double>>;
using vvc = vector<vector<char>>;
using vvp = vector<vector<P>>;
using vvb = vector<vector<bool>>;
template <typename T>
bool chmax(T &a, const T b) {
if(a < b) {
a = b;
return true;
}
return false;
}
template <typename T>
bool chmin(T &a, const T b) {
if(a > b) {
a = b;
return true;
}
return false;
}
const ll mod = 1e9 + 7;
const ll MAX = 100;
template <typename T>
T abs(T a) {
if(a < 0) {
return -a;
} else {
return a;
}
}
int main() {
int n;
cin >> n;
int a = n * 1.08;
if(a < 206) {
cout << "Yay!" << endl;
} else if(a == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
