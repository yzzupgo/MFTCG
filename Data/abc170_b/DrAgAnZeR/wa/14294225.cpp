#include<bits/stdc++.h>
#define ll long long
#define dbl double
#define forn(i,n,k) for(int i=0;i<n;i=i+k)
#define forpn(p,n,k) for(int i=p;i<n;i+=k)
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
using namespace std;
int a[500000],b[500000];
int no_of_bits(long long n)
{
int count=0;
while(n>0)
{
n=n>>1;
count++;
}
return count;
}
long long gcd(int a,int b)
{
if(b==0) return a;
else return gcd(b,a%b);
}
void primeFactors(int n,int p)
{
if(n%2==0){ a[p]=2;}
while (n % 2 == 0)
{
n = n/2;
}
for (int i = 3; i <= sqrt(n); i = i + 2)
{
if(n%i==0){ if(a[p]>0) b[p]=i;
else a[p]=i;
}
while (n % i == 0)
{
n = n/i;
}
}
}
void solve(){
int a,b;
cin>>a>>b;
if(b>=2*a&&b<=4*a) cout<<"Yes";
else cout<<"No";
}
int main()
{ ios::sync_with_stdio(0);
int t;
t=1;
cin.tie(0);
cout.tie(0);
while(t--)
{
solve();
}
return 0;
}
