#include<algorithm>
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define S second
#define F first
#define f(i,n) for(ll i=0;i<n;i++)
#define f1(i,n) for(ll i=1;i<=n;i++)
#define fb(i,n) for(ll i=n-1;i>=0;i--)
#define fb1(i,n) for(ll i=n;i>0;i--)
#define endd cout<<'\n';
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fr(it,a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define all(x) x.begin(), x.end()
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define vi vector<ll>
#define pii pair<ll,ll>
#define CASES ll t;cin>>t;while(t--)
typedef long long ll;
typedef unsigned long long ull;
int main()
{
fast;
ll n,m;
cin>>n>>m;
ll x=(4*n)-m;
x/=2;
double y=(4*n)-m;
double x1=(y/(2.0));
if(x>=0 && x==x1)
cout<<"Yes";
else
cout<<"No";
return 0;
}
