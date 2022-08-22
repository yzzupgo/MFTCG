#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int f(int n)
{
int ans=1,base=10;
while(n)
{
if(n&1)
ans*=base;
base*=base;
n>>=1;
}
return ans;
}
int main()
{
int n;
scanf("%d",&n);
int x=n;
int k=0;
while(x)
{
x/=10;
k++;
}
int sum=0;
for(int i=1;i<k;i++)
{
if(i==1)
sum+=9;
else if(i%2==1)
sum+=f(i)-f(i-1);
}
if(k%2==1)
sum+=n-f(k-1)+1;
cout<<sum<<endl;
return 0;
}
