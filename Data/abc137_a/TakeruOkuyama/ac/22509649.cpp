#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(a) a.begin(), a.end()
using namespace std;
using ll = long long;
using P = pair<int, int>;
void solve() {
int a,b;
cin>>a>>b;
cout<<max({a+b,a-b,a*b})<<endl;
}
int main() {
std::cin.tie(nullptr);
std::ios_base::sync_with_stdio(false);
std::cout << std::fixed << std::setprecision(15);
solve();
return 0;
}
