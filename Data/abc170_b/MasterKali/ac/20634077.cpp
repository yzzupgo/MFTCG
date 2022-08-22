#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vp;
#define puts(x) for(auto &i : x) cout << i << " "
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int MAX=1e5+7;
const ll INF = 1e17;
void solve(){
int x, y;
cin >> x >> y;
if (x * 4 < y || x * 2 > y) cout << "No" << endl;
else
{
if (y%4==0 || y%2==0) cout << "Yes" << endl;
else cout << "No" << endl;
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t = 1;
while (t--){
solve();
}
return 0;
}
