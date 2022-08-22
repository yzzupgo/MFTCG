#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
for(int i=0;i<=n;i++)
{
int j=n-i;
if(i*2+j*4==m)
{
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
