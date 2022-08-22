#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
lli x,y,i,a;
cin>>x>>y;
for(i=0;i<100;i++)
{
a=x-i;
if(a>=0)
{
if(i*2+a*4==y)
{
cout<<"Yes"<<"\n";
break;
}
}
else
{
cout<<"No"<<"\n";
break;
}
}
}
