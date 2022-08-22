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
int A,B;
cin >> A,B;
int sum,sa,mul;
sum = A+B;
sa = A-B;
mul = A*B;
if(sum >= sa && sum >= mul) cout << sum << endl;
else if(sa >= mul && sa >= sum) cout << sa << endl;
else cout << mul << endl;
}
