#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<long long, long long> LP;
#define INF 999999999
#define MOD 1000000007
#define REP(i,n) for(ll i = 0, i ##_len = (n); i < i ##_len; ++i)
#define REP_AB(i,a,b) for (ll i = ll(a); i <= ll(b); ++i)
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define UNIQUE(v) sort(ALL(v));v.erase(unique(ALL(v)), v.end());
#define SIZE(x) ((ll)(x).size())
#define REVERSE(v) reverse(ALL(v))
#define BIN_SEARCH(v,a) binary_search(ALL(v), a)
#define BIN_LEFT(v,a) (lower_bound(ALL(v), a) - v.begin())
#define BIN_RIGHT(v,a) (upper_bound(ALL(v), a) - v.begin())
#define BIN_INSERT(v,a) (v.insert(v.begin() + BIN_LEFT(v, a), a))
#define DEL(v,i) v.erase(v.begin() + i)
#define INSERT(v,i,a) v.insert(v.begin() + i, a)
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return (a / gcd(a, b)) * b;}
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
#define out cout
#define in cin
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
ll N;
in >> N;
if(N<10){
out << N << endl;
}else if(N<100 || N==10){
out << 9 << endl;
}else if(N<1000){
out << 9 + N -(N/100 * 100) + 1 << endl;
}else if(N<10000 || N==1000){
out << 909 << endl;
}else if(N<100000){
out << 9 + 900 + N-(N/10000 * 10000) + 1 << endl;
}else if(N==100000){
out << 9 + 900 + 90000 << endl;
}
}
