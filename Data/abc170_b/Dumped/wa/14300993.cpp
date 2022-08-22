#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define D1(x) {cerr<<" [" <<#x<<": "<<x<<"]";cout << endl;}
#define D2(x) {cerr<<" [" <<#x<<": ";for(auto it:x)cerr<<it<< " ";cerr<<"] ";cout << endl;}
const ll MOD=1e9+7;
void solve(){
int n,x;
cin >> n >> x;
for(int i=1;i<=n;i++){
if((i*2 + (n-i)*4)==x){cout << "Yes";return;}
}
cout << "No";
}
int main(){
IOS
solve();
cerr <<endl <<"[ Time : " << (float)clock() / CLOCKS_PER_SEC << " secs ]" << endl;
}
