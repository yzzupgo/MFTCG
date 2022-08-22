#include <bits/stdc++.h>
using namespace std;
typedef vector<long long> vll;
typedef long l;
#define mp make_pair
#define pb push_back
#define long long int
#define f(i,s,n) for(l i=s;i<n;i++)
#define fe(i,s,n) for(l i=s;i<=n;i++)
#define fr(i,s,n) for(l i=s;i>n;i--)
#define fre(i,s,n) for(l i=s;i>=n;i--)
const int maxn = 2e6 + 10;
int countDigit(int n2)
{
int n=n2;
if (n == 0)
return 0;
return 1 + countDigit(n / 10);
}
int32_t main()
{
int x;
cin>>x;
int y=countDigit(x);
if(y%2==0)
{
int k=y-1;
int z2=9;
int z=9;
k--;
while(k>0)
{
z=z+(z2*pow(10,k));
k=k-2;
}
cout<<z<<endl;
}
else{
if(y==1)
cout<<x<<endl;
else
{
int k=y-2;
int z2=9;
k--;
int z=9;
while(k>0)
{
z=z+(z2*pow(10,k));
k=k-2;
}
cout<<(x-pow(10,y-1))+z<<endl;
}
}
}
