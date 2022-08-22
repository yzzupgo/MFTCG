#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
int main() {
int N, L, S=0, T,ans;
cin >> N >> L;
VI A(N);
vector<PII> P;
REP (i,N) {
A.at(i) = L - i;
int B,C=1;
B = abs(A.at(i));
if (A.at(i) < 0) {
C = -1;
}
PII D;
D = MP(B,C);
P.PB(D);
S += A.at(i);
}
SORT(P);
PII E = P.at(0);
T = E.first * E.second;
ans = S + T;
cout << ans << endl;
return 0;
}
