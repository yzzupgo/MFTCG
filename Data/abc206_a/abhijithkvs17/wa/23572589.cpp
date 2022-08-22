#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include <iostream>
#include "debug.h"
#else
#define deb(x...)
#endif
#define endl "\n"
#define pb push_back
#define int long long
#define ll long long
#define pii pair<int,int>
#define F first
#define S second
#define mod 1000000007
#define MOD 998244353
#define inf (int)(1e18)
#define all(c) c.begin(),c.end()
#define read(v) for(auto &it:v) cin>>it;
#define print(v) for(auto &it:v) cout<<it<<" ";
#define MAX 1000000
#define getunique(a) a.resize(unique(a.begin(),a.end())-a.begin());
const int N = 4e5 + 5;
#define int long long
void solve() {
int n;
cin >> n;
float y = n * 1.08;
int x = floor(y);
if(x <= 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t = 1;
while(t--) {
solve();
}
return 0;
}
