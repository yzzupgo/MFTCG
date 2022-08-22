#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mp make_pair
#define pb push_back
#define lp(i,s,f) for(ll i = s; i < ll(f); i++)
#define inF freopen("input.in", "r", stdin);
#define outF freopen("output.in", "w", stdout);
#define endl '\n'
#define MOD 1000000007
#define mm(arr) memset(arr, 0, sizeof(arr))
#define F first
#define S second
int main(){
FAST
int n, m; cin >> n >> m;
string ans = "No";
for(int i = 0; i <= n; i++){
if(i*2 + (n - i)*4 == m)ans = "Yes";
}
cout << ans;
return 0;
}
