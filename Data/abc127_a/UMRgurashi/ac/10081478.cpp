#include <iostream>
#include<algorithm>
#include<string>
#include <cmath>
#include <vector>
#pragma region Macros
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=1;i<=n;i++)
#define int long long
#define all(x) (x).begin(),(x).end()
#define swap(a,b) (a += b,b = a - b,a -= b)
int gcd(int a, int b)
{
if (a < b)
swap(a, b);
if (b == 0)
return a;
if (a % b == 0)
return b;
return gcd(b, a % b);
}
int lcm(int a, int b)
{
return a * b / gcd(a, b);
}
using namespace std;
#pragma endregion
signed main() {
int A,B;
cin >> A >> B;
if (A >= 13) {
cout << B;
return 0;
}
if (5 < A && A <= 12) {
cout << B / 2;
return 0;
}
cout << 0;
}
