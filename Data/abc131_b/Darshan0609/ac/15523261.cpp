#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
ll isPrime(int n)
{
if (n <= 1)
return 1;
if (n <= 3)
return 2;
if (n % 2 == 0 || n % 3 == 0)
return 1;
for (int i = 5; i * i <= n; i = i + 6)
if (n % i == 0 || n % (i + 2) == 0)
return 1;
return 2;
}
ll fact(ll n){ll res = 1;for (ll i = 2; i <= n; i++)res = res * i,res%=1000000007;
return res; }
int gcd(int a, int b)
{
if (b == 0)
return a;
return gcd(b, a % b);
}
ll findlcm(ll arr[], int n)
{
ll ans = arr[0];
for (int i = 1; i < n; i++)
ans = (((arr[i] * ans)) /
(gcd(arr[i], ans)));
return ans;
}
int main()
{
fast;
ll t=1;
while(t--)
{
ll n,l;
cin>>n>>l;
ll k=l-1;
ll sum=((n*(n+1))/2)+n*k;
for(ll i=1;i<=n;i++)
{
if(i==-k)
{
cout<<sum;
exit(0);
}
}
if(k>=0)
{
cout<<sum-k-1;
}
else
{
cout<<sum-n-k;
}
}
return 0;
}
