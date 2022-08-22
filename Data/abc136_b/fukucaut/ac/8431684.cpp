#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < n; i++)
#define REPR(i,n) for(int i = n; i >= 0; i--)
#define FOR(i,m,n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main()
{
int ans=0;
int N;
string num;
cin >> N;
num = to_string(N);
if(num.length() == 6) ans = 9+900+90000;
else if(num.length() == 5) ans = 9+900+N-9999;
else if(num.length() == 4) ans = 9+900;
else if(num.length() == 3) ans = 9+N-99;
else if(num.length() == 2) ans = 9;
else ans = N;
cout << ans << endl;
}
