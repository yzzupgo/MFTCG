#include<iostream>
using namespace std;
bool solve()
{
int n,m;
cin>>n>>m;
for(int i=0;i<=n;i++)
for(int j=0;j<=n;j++)
{
if((i*4+j*2==m)&&(i+j==n))
return 1;
}
return 0;
}
int main()
{
cout<<(solve()?"Yes":"No");
return 0;
}
