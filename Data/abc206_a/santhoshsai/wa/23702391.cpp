#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define mk make_pair
#define pb push_back
#define eb emplace_back
#define ft first
#define sd second
#define FOR(i,a,n) for(int i=a;i<n;++i)
#define RFOR(i,a,n) for(int i=a;i>=n;i--)
#define f(i,a) for(auto &i : a)
#define f2(x,y,a) for(auto &[x,y] : a)
#define pdd pair<double,double>
#define pii pair<int,int>
#define pip pair<int,pair<int,int>>
#define ppi pair<pair<int,int>,int>
#define pll pair<ll,ll>
#define ppl pair<pair<ll,ll>,ll>
#define all(a) a.begin(), a.end()
#define rll(a) a.begin(),a.end(),greater<int>()
#define MOD 1000000007
#define PQ priority_queue<int> pq
#define SPQ priority_queue<int,vector<int>,greater<int>> pq
#define ar array
template<typename T>
void print(T a, int N = -1) {
if(N == -1) {
N = a.size();
}
FOR(i, 0, N)cout << a[i] << " ";
cout << "\n";
}
void solve() {
int n;
cin >> n;
int ans = (float) n * 1.08;
cout << ans << "\n";
if(ans < 206) {
cout << "Yay!";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t = 1;
while(t--) {
solve();
}
return 0;
}
