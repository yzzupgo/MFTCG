#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define rep2(i,a,n) for (int i = (a); i < (n); i++)
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> Pl;
typedef pair<int, int> P;
typedef tuple<ll, ll, string> Tlls;
ll gcd(ll a, ll b)
{
while (a)
{
if (a < b)
{
std::swap(a, b);
}
a %= b;
}
return b;
}
ll lcm(ll a, ll b)
{
return a / gcd(a, b) * b;
}
map<ll, ll> prime_factorization(ll n)
{
map<ll, ll> prime_factors;
for (ll i = 2; i * i <= n; i++)
{
while (n % i == 0)
{
prime_factors[i]++;
n /= i;
}
}
if (n != 1)
prime_factors[n] = 1;
return prime_factors;
}
vector<ll> get_divisors(const ll n)
{
vector<ll> divs;
for (ll i = 1; i < (ll)sqrt((ld)n) + 1; i++)
{
if (n % i == 0)
{
divs.push_back(i);
if (i != n / i)
{
divs.push_back(n / i);
}
}
}
return divs;
}
int main()
{
ll X, Y;
cin >> X >> Y;
rep(i, X + 1)
{
rep(j, X + 1)
{
if (2 * i + 4 * j == Y && i + j == X)
{
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
