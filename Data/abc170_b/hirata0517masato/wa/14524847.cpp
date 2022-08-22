#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<limits>
#include<sstream>
#include<unordered_map>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef int itn;
const int inf = numeric_limits<int>::max() >> 2;
const ll linf = numeric_limits<ll>::max() >> 2;
const ull ulinf = numeric_limits<ull>::max() >> 2;
const double pi = acos(-1);
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int dx8[8]={-1,0,1,-1,1,-1,0,1};
const int dy8[8]={-1,-1,-1,0,0,1,1,1};
#define p_queue(i) priority_queue<i>
#define rp_queue(i) priority_queue<i, vector<i>, greater<i>>
#define umap(i,j) unordered_map<i,j>
#define P(p) cout<<(p)<<endl
#define PS(p) cout<<(p)<< " "
#define PN cout << endl
#define rep(i,m,n) for(int i = (m); i < (int)(n); i++)
#define rrep(i,m,n) for(int i = (n-1); i >= (int)(m); i--)
#define inrep(n,a) for(int i = 0; i < (int)(n); i++)cin >> a[i];
#define mod(i) ((i)%(ll)(1e9 + 7))
#define divm(a,b) (mod(a * modpow((ll)b,(ll)(1e9+5))))
#define rsort(a,b,c) sort(a, b, greater<c>())
#define vsort(v) sort(v.begin(), v.end())
#define rvsort(v,c) sort(v.begin(), v.end(), greater<c>())
#define ft first
#define sd second
#define pb push_back
#define it insert
#define sz(x) ((int)(x).size())
#define lb(a,n,k) (lower_bound(a,a+n,k) - (a))
#define vlb(a,k) (lower_bound(a.begin(),a.end(),k) - a.begin())
#define ub(a,n,k) (upper_bound(a,a+n,k) - (a))
#define vub(a,k) (upper_bound(a.begin(),a.end(),k) - a.begin())
#define YES cout<<"YES"<< endl
#define NO cout<<"NO"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define ret return
int main(){
int x,y;
cin >>x >> y;
rep(i,1,x){
if(y == 2*i + 4*(x-i)){
Yes;
ret 0;
}
}
No;
return 0;
}
