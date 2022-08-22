#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,a,b,c=0;
cin>>a>>b;
for(i=0;i<=a;i++)
{
if((b-i*4)%2==0)
c=1;
}
if(c==1)
cout<<"Yes";
else
cout<<"No";
return 0;
}
