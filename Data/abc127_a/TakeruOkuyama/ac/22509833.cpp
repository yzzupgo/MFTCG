#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(a) a.begin(), a.end()
#define yn(p) cout << (p?"Yes":"No") << endl;
using namespace std;
using ll = long long;
using P = pair<int, int>;
void solve() {
int a,b;
cin>>a>>b;
if(a>=13)cout<<b<<endl;
else if(a>=6)cout<<b/2<<endl;
else cout<<0<<endl;
}
int main() {
std::cin.tie(nullptr);
std::ios_base::sync_with_stdio(false);
std::cout << std::fixed << std::setprecision(15);
solve();
return 0;
}
