#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,count=0;
cin>>x>>y;
for(int i=0;i<x;i++)
for(int j=0;j<y;j++)
{
if(i+j==x && 2*i+4*j==y || i+j==x && 2*j+4*i==y)
count++;
}
if(count>0)
cout<<"Yes"<<endl;
else
cout<<"No";
cout<<endl;
return 0;
}
