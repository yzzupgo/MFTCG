#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
int a=0;
while(n>0)
{
n/=10;
a++;
}
return a;
}
int main()
{
int n,a=0;
cin>>n;
for(int i=1;i<=n;i++)
{
if(f(i)%2==1)
{
a++;
}
}
cout<<a;
return 0;
}
