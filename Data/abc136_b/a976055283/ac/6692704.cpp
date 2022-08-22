#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<vector>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int MAXN = 100005;
#define rep(i,a,b) for ( int i = a ; i < b ; ++ i )
#define CLR(a) memset(a,0,sizeof a)
#define repf(i,a,b) for ( int i = a ; i <= b ; ++ i )
template <class T>
void in(T& x) {
static char ch; static bool neg;
for (ch = neg = 0; ch < '0' || '9' < ch; neg |= ch == '-', ch = getchar());
for (x = 0; '0' <= ch && ch <= '9'; (x *= 10) += ch - '0', ch = getchar());
x = neg ? -x : x;
}
int main()
{
ll n;
in(n);
if (n >= 1 && n <= 9)cout << n;
else if (n <= 99)cout << "9";
else if (n <= 999)cout << n - 90;
else if (n <= 9999)cout << "909";
else if (n <= 99999)cout << n - 9090;
else cout << (99999 - 9090);
return 0;
}
