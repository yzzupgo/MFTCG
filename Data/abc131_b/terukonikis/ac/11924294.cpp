#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)
#define erep(i,n) for(int i = 0;i<=n;i++)
#define rep1(i,n) for(int i = 1;i<n;i++)
#define erep1(i,n) for(int i = 1;i<=n;i++)
typedef long long ll;
#define vint vector<int>
#define vvint vector<vector<int>>
#define vstring vector<string>
#define vdouble vector<double>
#define vll vector<ll>:
#define vbool vector<bool>
#define INF 100000000000000009
#define int long long
using P = pair<int,int>;
signed main(){
int n,l;
cin >> n >> l;
int sum = 0;
for(int i = l;i < n+l;i++) sum += i;
if(0 < l) cout << sum - l << endl;
else if(n + l <= 0) cout << sum - (n + l-1) << endl;
else cout << sum << endl;
}
