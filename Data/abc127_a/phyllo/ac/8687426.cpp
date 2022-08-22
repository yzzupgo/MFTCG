#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define FOR(it,c) for(__typeof((c).begin()) it=(c).begin(); it!=(c).end(); ++it)
#define ALLOF(c) (c).begin(), (c).end()
typedef long long ll;
typedef unsigned long long ull;
int main(){
int A, B;
cin >> A >> B;
if(A>=13) cout << B << endl;
else if(A>=6) cout << B/2 << endl;
else cout << 0 << endl;
return 0;
}
