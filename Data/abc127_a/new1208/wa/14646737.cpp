#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i <(n); ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main() {
int a, b;
cin >> a >> b;
if(a >= 13) cout << b << endl;
else if(a < 5) cout << 0 << endl;
else cout << b/2 << endl;
return 0;
}
