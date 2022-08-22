#include <bits/stdc++.h>
#include <math.h>
#define REP(i,n) for(int i = 0; i < (n); i++)
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1001001001;
const int mINF = -1001001001;
int main() {
int n,l;
cin >> n >> l;
int n_min = INF;
ll ans=0;
int count;
REP(i,n) {
ans += l+i;
if(n_min>abs(l+i)) {
n_min = abs(l+i);
count = i;
}
}
ans -= l+count;
cout << ans << endl;
return 0;
}
