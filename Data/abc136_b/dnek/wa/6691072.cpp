#include <bits/stdc++.h>
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define pb push_back
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define REP(i,n) FOR(i, 0, n)
#define ll long long
using namespace std;
int gcd(int a, int b) { return b != 0 ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }
int main()
{
int n;
cin >> n;
if (n < 10) cout << n << endl;
else if (n < 100) cout << 9 << endl;
else if (n < 1000) cout << n - 90 << endl;
else if (n < 10000) cout << 909 << endl;
else cout << n - 9090 << endl;
return 0;
}
