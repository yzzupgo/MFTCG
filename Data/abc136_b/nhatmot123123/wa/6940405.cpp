#include <bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define db "knapsack"
#define fi first
#define se second
#define endl '\n'
const int INF = 1e9 + 1;
const int maxN = 1e5 + 2;
const int mod = 1e9 + 7;
typedef long long ll;
typedef int Array[maxN];
typedef ll LLArray[maxN];
typedef pair<int, int> PII;
typedef PII PIIArray[maxN];
void docfile()
{
if (ifstream("FORM.inp"))
{
freopen("FORM.inp", "r", stdin);
freopen("FORM.out", "w", stdout);
}
else if (ifstream(db".inp"))
{
freopen(db".inp", "r", stdin);
freopen(db".out", "w", stdout);
}
}
int n;
void solve()
{
if(n <= 10) cout << n;
else if(n <= 99) cout << 9;
else if(n <= 999) cout << n - 90;
else if(n <= 9999) cout << 909;
else if(n <= 99999) cout << n - 9090;
else if(n == 100000) cout << 90909;
}
void input()
{
cin >> n;
solve();
}
int main()
{
docfile();
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
input();
}
