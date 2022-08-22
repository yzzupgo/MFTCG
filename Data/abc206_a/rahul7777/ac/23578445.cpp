#include <bits/stdc++.h>
using namespace std;
const int N = (int)(1e6 + 2);
#define mod (int)(1e9+7)
#define ll long long int
#define endl '\n'
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define test0 solve() ;
#define test1 int t;cin>>t;for(int i=1;i<=t;i++) solve();
#define test2 int t;cin>>t;for(int i=1;i<=t;i++) cout<<"Case #"<<i<<": ",solve();
#define F first
#define S second
#define pa(v) for(int i:v) cout<<i<<" ";cout<<endl;
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args) {
const char *comma = strchr(names + 1, ',');
cout.write(names, comma - names) << " : " << arg1 << " | ";
__f(comma + 1, args...);
}
#else
#define trace(...)
#endif
ll max(ll a, ll b) {
return a > b ? a : b;
}
ll min(ll a, ll b) {
return a < b ? a : b;
}
void solve();
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
IOS
test0
}
void solve() {
int n;
cin >> n;
if(floor(n * 1.08) < 206) {
cout << "Yay!";
} else if(floor(n * 1.08) == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
