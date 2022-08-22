#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <vector>
#include <numeric>
using namespace std;
#define ll long long int
#define rep(i,a,n) for (int i = a; i < n; i++)
#define INF 1e9
#define LINF 1e17
#define MOD (int)(1e9 + 7)
#define pi 3.141592653589
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define ALL(a) (a).begin(), (a).end()
#define sort_v(a) sort(a.begin(), a.end())
#define fi first
#define se second
void print(bool a)
{
if (a == true)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
ll gcdll(ll a, ll b)
{
while (1)
{
if (a < b)
swap(a, b);
if (b == 0)
break;
a %= b;
}
return a;
}
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main()
{
int n, l;
cin >> n >> l;
int sum = (n * (2 * l + n - 1)) / 2;
if (l >= 0)
{
sum -= l;
}
else
{
if (l + n < 0)
sum -= l + n - 1;
}
cout << sum << endl;
}
