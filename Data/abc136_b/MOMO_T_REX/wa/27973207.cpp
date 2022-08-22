#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
int a;
cin>>a;
int m=0,sum=0;
for(int i=1;i<a;i++)
{m=i;
int n=0;
for (int j=0;m!=0;j++)
{
m/=10;
n++;
}
if(n%2!=0)
sum++;
}
cout<<sum;
}
