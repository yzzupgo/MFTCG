#include<iostream>
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<map>
#include<tuple>
#include<algorithm>
#include<cmath>
#include<limits>
#include<set>
#include<queue>
using namespace std;
#define int long long int
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }
signed main()
{
int A, B;
cin >> A >> B;
if (A > 13)cout << B;
else if (A >= 6 && A <= 12)cout << B / 2;
else cout << 0;
}
