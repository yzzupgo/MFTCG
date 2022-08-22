#include <bits/stdc++.h>
#define FOR(i,a,n) for (long long i = (a); i < (n); i++)
#define REP(i,n) for (long long i = 0; i < (n); i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define pb push_back
#define PI 3.14159265358979323846264338327950L
#define e18 1000000000000000000
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
long long myGcd(long long a, long long b);
int myGcd(int a, int b);
long long myLcm(long long a, long long b);
int myLcm(int a, int b);
long long checkDigit(long long num);
int checkDigit(int num);
int main()
{
cin.tie(0);
ios::sync_with_stdio(false);
int X, Y;
bool f = false;
cin >> X >> Y;
REP(i, X)
{
int ans = 2 * (X - i) + 4 * i;
if (ans == Y)
f = true;
}
if (f)
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
return 0;
}
long long myGcd(long long a, long long b)
{
if (a % b == 0)
return b;
return myGcd(b, a % b);
}
int myGcd(int a, int b)
{
if (a % b == 0)
return b;
return myGcd(b, a % b);
}
long long myLcm(long long a, long long b)
{
return a * b / myGcd(a, b);
}
int myLcm(int a, int b)
{
return a * b / myGcd(a, b);
}
long long checkDigit(long long num)
{
string st = to_string(num);
return st.size() - 1;
}
int checkDigit(int num)
{
string st = to_string(num);
return st.size() - 1;
}
