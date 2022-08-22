#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF = 2147483647;
const int MOD = 1000000007;
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main() {
int a,b;
cin >> a >> b;
if(a <= 5)cout << 0 << endl;
else if(a <= 12)cout << b/2 << endl;
else cout << b << endl;
return 0;
}
