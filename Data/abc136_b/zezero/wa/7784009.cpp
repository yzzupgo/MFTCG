#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i,n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i,x,n) for(int i = x; i < n; i++)
int shisu(int a,int b){
if (b==0) return a;
else{rep(i,b) a*=10;
return a;
}
}
int main() {
int n,j,ans;
cin >> n;
j=0;
REP(i,1,n+1){
if (i==shisu(1,j)){
ans+=shisu(9,j);
j+=2;
i=shisu(1,j);
}
}
cout << ans << endl;
return 0;
}
