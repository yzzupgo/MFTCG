#include<bits/stdc++.h>
#include <ctime>
using namespace std;
typedef unsigned long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define endl "\n"
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MxN 100000
#define pi acos(-1.0)
ll gcd(ll a, ll b)
{
if (a == 0)
return b;
return gcd(b % a, a);
}
ll findLcm(ll a, ll b)
{
return (a*b)/gcd(a, b);
}
int gcd(int a, int b)
{
if (a == 0)
return b;
return gcd(b % a, a);
}
int findLcm(int a, int b)
{
return (a*b)/gcd(a, b);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
int a,b;
cin>>a>>b;
string ans="No";
for(int i=0;i<=a;i++)
{
int val = i*4;
int val1 = (a-i)*2;
if(val1+val==b)
{
ans = "Yes";
break;
}
}
cout<<ans<<endl;
return(0);
}
