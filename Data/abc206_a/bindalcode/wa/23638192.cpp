#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define pii pair<int,int>
#define ff first
#define ss second
#define endl "\n"
#define print(x) cout<<x<<endl
#define printt(x,y) cout<<x<<" "<<y<<"\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define vvi vector<vector<int>>
#define sz(x) (int)x.size()
#define maxq priority_queue<int>
#define minq priority_queue<int,vector<int>,greater<int>>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
const int mod = 1e9 + 7;
const int N = 200005;
void solve() {
int n;
cin >> n;
int z = (1.08 * n);
if(z > 206) {
cout << "Yay!";
} else if(z == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
int32_t main() {
fastio;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t = 1;
while(t--) {
solve();
}
}
