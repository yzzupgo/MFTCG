#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<functional>
#include<math.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<(n);i++)
typedef long long ll;
typedef pair<ll, ll> p;
const int INF = 1001001001;
const double PI = acos(-1);
int main() {
int x, y;
cin >> x >> y;
bool exist = false;
rep(i, x+1) {
if (2 * i + 4 * (x - i) == y) exist = true;
}
printf(exist ? "Yes\n" : "No\n");
return 0;
}
