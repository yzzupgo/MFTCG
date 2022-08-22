#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,d,i,j,k;
cin>>x>>y;
d=y/x;
if(d>4||d<2)
cout<<"No"<<endl;
else if(y/x==2)
cout<<"Yes"<<endl;
else
{
i=x-1;
j=i*2;
k=y-j;
if(k==4)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
}
