#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
#include <map>
#include <cmath>
#define ll long long
#define dbl double
using namespace std;
struct A
{
ll a, b, c, d;
A(ll a = 0, ll b = 0, ll c = 0, ll d = 0)
{
this->a = a;
this->b = b;
this->c = c;
this->d = d;
}
};
ll mod(ll a)
{
return a >= 0 ? a : -a;
}
ll gcd(ll a, ll b)
{
ll t;
while(b!=0)
{
t = b;
b = a%b;
a = t;
}
return a;
}
void solve()
{
int n;
cin >> n;
int i, res = 0;
for(i = 1; i < n; i*=100)
{
if(n >= i*10)
{
if(n < i)
res += n-i + 1;
else
res += i*10-(i);
}
else
res += n - i + 1;
}
cout << res;
}
int main()
{
ios::sync_with_stdio(false);
solve();
}
