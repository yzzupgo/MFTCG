#include <iostream>
#include <math.h>
#include <iomanip>
#include <bits/stdc++.h>
#include <string.h>
#include <string>
#include <algorithm>
#define ll long long int
#define pb push_back
#define fi first
#define se second
#define mem(a,b) memset(a,b,sizeof(a))
#define debug(x) cout << (#x) << " = " << x << endl;
#define debug2(i,j) cout << (#i) << "=" << i << " , " << (#j) << "=" << j << endl;
using namespace std;
ll modInverse(ll a,ll m)
{
ll m0 = m;
ll y = 0, x = 1;
if (m == 1)
return 0;
while (a > 1)
{
ll q = a / m;
ll t = m;
m = a % m, a = t;
t = y;
y = x - q * y;
x = t;
}
if (x < 0)
x += m0;
return x;
}
ll binomialCoeff(ll n,ll k)
{
ll res = 1;
if(k >n - k)
k = n - k;
for(int i = 0; i < k; ++i)
{
res *= (n - i);
res /= (i + 1);
}
return res;
}
ll power(ll x,ll y)
{
ll temp;
if(y == 0)
return 1;
temp = power(x, y/2);
if (y%2 == 0)
return temp*temp;
else
return x*temp*temp;
}
bool prime[100005];
void Sieve(int n)
{
memset(prime, true, sizeof(prime));
for (int p=2; p*p<=n; p++)
{
if (prime[p] == true)
{
for (int i=p*p; i<=n; i += p)
prime[i] = false;
}
}
}
const int Nmax = 1e6 + 5;
ll mod = 1e9 + 7;
int main()
{
ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int x,y;
cin >> x >> y;
bool ans = false;
for(int i=0;i<=x;i++)
{
for(int j=x-i;j<=x;j++)
{
int p = 4*i + 2*j;
if(p == y)
ans = true;
}
}
if(ans)
cout << "Yes";
else
cout << "No";
}
