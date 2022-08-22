#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define mpi map<int,int>
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define ppi pair<int,int>
#define forn(i,n) for(int i=0;i<n;i++)
#define M 1000000007
#define all(x) x.begin(), x.end()
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
void solve() {
int n;
cin >> n;
int txp = 1.08 * n;
if(txp < n) {
cout << " Yay!" << endl;
} else if(txp == n) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int32_t main() {
fastio;
int t = 1;
cin >> t;
while(t--) {
solve();
}
return 0;
}
