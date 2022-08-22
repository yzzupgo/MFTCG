#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using si = set<int>;
using vll = vector<ll>;
using vvi = vector<vector<int>>;
using ss = string;
using db = double;
template<typename T> using minpq = priority_queue <T,vector<T>,greater<T>>;
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};
#define V vector
#define P pair<int,int>
#define rep(i,s,n) for(int i=(s);i<(int)(n);i++)
#define rev(i,s,n) for(int i=(s);i>=(int)(n);i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ci(x) cin >> x
#define cii(x) ll x;cin >> x
#define cci(x,y) ll x,y;cin >> x >> y
#define co(x) cout << x << endl
#define pb push_back
#define sz(x) int(x.size())
#define yn cout<<"Yes"<<endl;else cout<<"No"<<endl
template<class T>void chmax(T &x,T y){x=max(x,y);}
template<class T>void chmin(T &x,T y){x=min(x,y);}
int main(){
cci(x,y);
int mi=x*2;
int ma=x*4;
int f=1;
if(y%2 || ma<y || y<mi)f=0;
if(f)yn;
}
