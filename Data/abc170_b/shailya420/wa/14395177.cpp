#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,c=0,d=0,a=0;
cin>>x>>y;
for(int c=0;c<=x+1;c++)
{
d=x-c;
if(2*c+4*d==y)
{
a=1;
break;
}
}
if(a==1)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
