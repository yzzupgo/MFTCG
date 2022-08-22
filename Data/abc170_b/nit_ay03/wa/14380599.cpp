#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define fo(i,a,b) for(int i = a; i<=b ; i++)
#define rfo(i,a,b) for(int i = a; i>=b ; i--)
#define vii vector<int>
#define vll vector<ll>
#define pq priority_queue
#define uom unordered_map
#define all(v) v.begin(),v.end()
#define mp make_pair
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
#define pii pair<int,int>
#define pll pair<long,long>
#define mll map<ll,ll>
#define mii map<int,int>
#define vvii vector<vii>
#define vvll vector<vll>
#define mod 1000000007
#define pi 3.1415926535897932384626433832795
using namespace std;
void INPUT() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
void solve()
{
int n,m;
cin >> n >> m;
int x = 2*n - m/2;
int y = n - x;
if(x>=0 and y>=0 and (x+y) == n) cout << "Yes\n";
else cout << "No\n";
}
int main() {
FIO
INPUT();
int t;
t = 1;
while(t--)
{
solve();
}
return 0;
}
