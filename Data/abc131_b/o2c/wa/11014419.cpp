#include "bits/stdc++.h"
#define rep(i,a) for (int i = 0; i < (int)a; ++i)
#define REP(i,a,b) for (int i = (a); i < (int)b; ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
void Main() {
int n, l;
cin >> n >> l;
int tot = n*l + n*(n-1)/2;
int dif;
if (l * (l+n-1) < 0) dif = 0;
else if (l > 0) dif = l;
else dif = l + n - 1;
cout << tot - dif << endl;
}
int main() {
std::cin.tie(nullptr);
std::ios_base::sync_with_stdio(false);
std::cout << std::fixed << std::setprecision(15);
Main();
return 0;
}
