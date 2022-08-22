#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
int a;
while(n>0)
{
n/=10;
a++;
}
return 0;
}
int main()
{
int n,a;
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
