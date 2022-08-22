#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,i,j=0,k,x;
cin>>a>>b;
for(i=1;i<=a;i++)
{
x=a-i;
k=(i*2)+(x*4);
if(k==b)
{
j=1;
break;
}
}
if(j==1) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
