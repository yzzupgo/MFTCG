#include "bits/stdc++.h"
#define rep(i,a) for (int i = 0; i < (a); ++i)
#define REP(i,a,b) for (int i = (a); i < (b); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
void Main() {
int n, l;
cin >> n >> l;
int ans = 0;
rep(i, n) ans += l + i;
int mn = 1000;
rep(i, n) if (abs(mn) > abs(l+i)) mn = l+i;
ans -= mn;
cout << ans << endl;
}
int main() {
std::cin.tie(nullptr);
std::ios_base::sync_with_stdio(false);
std::cout << std::fixed << std::setprecision(15);
Main();
return 0;
}
