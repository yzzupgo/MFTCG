#pragma gcc optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define REP(i,n) FOR(i, 0, n)
#define ALL(V) (V).begin(),(V).end()
#define SORT(V) sort(ALL(V))
#define REV(V) reverse(ALL(V))
#define RSORT(V) SORT(V);REV(V)
#define NPN(V) next_permutation(ALL(V))
#define pb(n) push_back(n)
#define endl '\n'
#define Endl '\n'
#define DUMP(x) cout << #x << " = " << (x) << endl
#define YES(n) cout << ((n) ? "YES" : "NO" ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No" ) << endl
#define Yay(n) cout << ((n) ? "Yay!": ":(") << endl
#define RAPID cin.tie(0);ios::sync_with_stdio(false)
#define VSUM(V) accumulate(ALL(V), 0)
#define IN(n) cin >> n
#define IN2(a,b) cin >> a >> b
#define IN3(a,b,c) cin >> a >> b >> c
#define IN4(a,b,c,d) cin >> a >> b >> c >> d
#define VIN(V) for(int i = 0; i < (V).size(); i++) {cin >> (V).at(i);}
#define OUT(n) cout << n << endl
#define VOUT(V) REP(i, (V).size()) {cout << (V)[i] << endl;}
#define VOUT2(V) REP(i, (V).size()) {cout << (V)[i] << " ";} cout<<endl;
#define int long long
#define P pair<ll,ll>
#define Vi vector<ll>
#define Vd vector<double>
#define Vs vector<string>
#define Vc vector<char>
#define M map<ll,ll>
#define S set<ll>
#define PQ priority_queue<ll>
#define PQG priority_queue<ll,V,greater<ll>
const int MOD = 1000000007;
const int INF = 1061109567;
const double EPS = 1e-10;
const double PI = acos(-1.0);
int gcd(int a,int b){return b != 0 ? gcd(b, a % b) : a;}
int lcm(int a, int b){return a * b / gcd(a, b);}
string toStrUp(string str){char diff = 'A'-'a';REP(i,str.size()) str[i] += diff;return str;}
string gCh(string str, int key){return str.substr(key,1);}
signed main() {
RAPID;
int n,m,a,b,c,d,x=INF,y,z;
string s,t;
IN2(a,b);
Vi TASTE(a);
REP(i,a){
TASTE[i] = i+b;
}
int SUM = VSUM(TASTE);
REP(i,a){
if(abs(x) > abs(TASTE[i])){
c = TASTE[i];
x = abs(TASTE[i]);
}
}
OUT(SUM-c);
}
