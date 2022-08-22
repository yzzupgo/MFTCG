#include<stdio.h>
#include<cstdio>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<time.h>
#include<set>
#include<map>
#include <iomanip>
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,a,b) for(int i=a;i>b;i--)
#define vint vector<int>
#define vvint vector<vint>
#define ct(a) cout<<a<<endl
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1e9 + 7;
const ll mod = 998244353;
ll N, L, ans;
string S;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
cin >> N >> L;
ans = (N * (N - 1)) / 2 + N * L;
if (L > 0)ans -= L;
if (L < 0)
{
if (L + N-1 >= 0)ans -= 0;
if (L + N-1 < 0)ans -= L + N - 1;
}
cout << ans << endl;
return 0;
}
