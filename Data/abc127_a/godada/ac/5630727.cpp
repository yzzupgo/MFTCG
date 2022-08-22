#include <bits/stdc++.h>
#define int long long
using namespace std;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef vector<PII> VP;
#define FOR(i,m,n) for(int i = m;i < n;i++)
#define RFOR(i,m,n) for(int i = m;i > n;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,m) RFOR(i,m,0)
#define pb(a) push_back(a)
#define fst first
#define snd second
#define SORT(V) sort((V).begin(),(V).end())
#define REV(V) reverse((V).begin(),(V).end())
const int MOD = 1000000007;
const int INF = 1061109567;
const double EPS = 1e-10;
const double PI = acos(-1.0);
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
signed main(){
int A, B;
cin >> A >> B;
if(A>=6&&A<=12){
cout << B/2 << endl;
}else if(A<=5){
cout << 0 << endl;
}else{
cout << B << endl;
}
return 0;
}
