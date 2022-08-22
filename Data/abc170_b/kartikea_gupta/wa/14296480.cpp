#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <typeinfo>
#define ll long long
#define ld long double
#define vll vector<ll>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define I insert
#define pb push_back
#define F first
#define S second
#define endl "\n"
#define repi(i,a,b) for (ll i = a; i < b; i++)
#define repj(j,a,b) for (ll j = a; j < b; j++)
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define mod 1000000007
#define lim 100001
using namespace std;
ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
int max3(int a, int b, int c) { return max(a, max(c, b)); }
int gcd(int a, int b)
{
if (a == 0)
{
return b;
}
else
{
return gcd(b % a, a);
}
}
ll power(ll a, ll n)
{
if (n == 1)
return a;
else if (n == 0)
return 1;
else
{
ll r = power(a, n / 2);
if (n % 2 == 0)
return r * r;
else
return r * a * r;
}
}
ll nCr(ll n, ll r) { return ((factorial(n)) / (factorial(n - r) * factorial(r))); }
void dfs(vector<vector<int>> &v, vi &check, int start)
{
check[start - 1] = 1;
repj(j, 0, v[start - 1].size())
{
if (!check[v[start - 1][j] - 1])
{
dfs(v, check, v[start - 1][j]);
}
}
}
bool isPrime(ll n)
{
if (n <= 1)
return false;
if (n <= 3)
return true;
if (n % 2 == 0 || n % 3 == 0)
return false;
for (int i = 5; i * i <= n; i = i + 6)
if (n % i == 0 || n % (i + 2) == 0)
return false;
return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x, y;
cin >> x >> y;
int a = 2 * x - y / 2;
int b = y / 2 - x;
if(floor(a)==ceil(a) and floor(b)==ceil(b) and a>=0 and b>=0){
cout << "Yes";
}
else
cout << "No";
return 0;
}
