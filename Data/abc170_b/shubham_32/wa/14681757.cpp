#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vi vector<int>
#define pi pair<int,int>
#define pl pair<ll,ll>
#define all(a) a.begin(),a.end()
#define mem(a,x) memset(a,x,sizeof(a))
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"
#define rep(i,a,b) for(int i=a;i<b;i++)
#define fast_io std::ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define trace(...) ZZ(#__VA_ARGS__, __VA_ARGS__);
template <typename Arg1> void ZZ(const char* name, Arg1&& arg1) {std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
const char* comma = strchr(names + 1, ',');
std::cerr.write(names, comma - names) << " : " << arg1;
ZZ(comma, args...);
}
void solve() {
int x, y;
cin >> x >> y;
rep(i, 1, x + 1) {
int l2 = i, l4 = x - i;
int ans = l2 * 2 + l4 * 4;
if (ans == y) {
cout << "Yes";
return;
}
}
cout << "No";
}
int main() {
fast_io;
int t = 1;
while (t--) {
solve();
}
return 0;
}
