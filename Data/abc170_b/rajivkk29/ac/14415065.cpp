#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<string>
#include<queue>
#include<stack>
#include<iomanip>
#include<sstream>
#include<iterator>
#include<random>
#include<chrono>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ONLINE_JUDGE
using namespace std;
#define deb(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) { cout << '\n';}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
cout << '[' << *it << " = " << a << "]  ";
err(++it, args...);
}
mt19937 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());
int rnd(int a, int b){
return a+(rng()%(b-a+1));
}
#define fcout cout<<fixed<<setprecision(15)
#define repp(i,j,k) for(int i=j; i<k; ++i)
#define rep(i,j) repp(i,0,j)
#define rrep(i,j,k) for(int i=j; i>=k; --i)
#define all(x) (x).begin(), (x).end()
#define sortr(x) sort(x.begin(), x.end())
#define lb(x,val) lower_bound(x.begin(), x.end(), val)
#define ub(x,val) upper_bound(x.begin(), x.end(), val)
#define pb push_back
#define endl '\n'
typedef long long int lli;
typedef pair<int,int> pii;
typedef pair<lli,lli> pll;
typedef vector<int> vi;
typedef vector<lli> vl;
typedef tuple<lli, lli> tii;
typedef tuple<lli, lli, lli> tiii;
const lli M=1000000007ll;
const double D=1.0;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
void solve(){
int x,y; cin>>x>>y;
rep(i,101){
rep(j,101){
if(i+j==x and 2*i+4*j==y){
cout<<"Yes\n";
return;
}
}
}
cout<<"No\n";
}
int main(){
fast_io
#ifndef ONLINE_JUDGE
freopen("test.in", "r", stdin);
freopen("test.out", "w", stdout);
#endif
int tc=1;
while(tc--){solve();}
return 0;
}
