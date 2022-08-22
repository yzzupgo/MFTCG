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
int n;
int ans=0;
cin >> n;
for(int i = 1; i<=n;i++) {
if(to_string(i).length()%2==1) ans++;
}
cout << ans << endl;
return 0;
}
