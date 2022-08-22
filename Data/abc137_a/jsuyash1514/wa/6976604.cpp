#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
#define speedX ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
#ifndef ONLINE_JUDGE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
cout<< name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
const char* comma = strchr(names + 1, ',');cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
int begtime = clock();
#define end_time() cout << "\n\nTime of execution: " << (clock() - begtime)*1000/CLOCKS_PER_SEC << " ms\n\n";
#else
#define trace(...)
#define end_time()
#endif
#define int long long
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
#define uset unordered_set
#define umap unordered_map
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define ONLINE_JUDGE
void solve(){
int a,b;
cin>>a>>b;
cout<<max(max(a+b,a-b),a*b);
}
signed main(){
speedX;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t=1;
while(t--){
solve();
}
end_time();
return 0;
}
