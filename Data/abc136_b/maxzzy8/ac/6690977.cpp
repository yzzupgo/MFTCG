#include <bits/stdc++.h>
#define ms(x,n) memset(x,n,sizeof(x));
#define rep(i,n) for(int i = 0; i < (int)n; ++i)
#define rep1(i,n) for(int i = 1; i <= (int)n; ++i)
#define pb push_back
#define PI acos(-1.0)
#define LONG_LONG_MAX 9223372036854775807
#define LONG_LONG_MIN -9223372036854775808
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
int n;
bool check(int x) {
int cnt = 0;
while (x > 0) {
int num = x % 10;
x /= 10;
++cnt;
}
if (cnt % 2 == 1) return true;
return false;
}
int main()
{
ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
cin >> n;
int cnt = 0;
for (int i = 1; i <= n; ++i) {
if (check(i)) {
++cnt;
}
}
cout << cnt << endl;
return 0;
}
