#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
int x,y,i,j,fg=0;
cin>>x>>y;
for(i=1;i<x+1;i++)
{
j=x-i;
if(i*2+j*4==y)
fg=1;
}
if(fg==1)
cout<<"Yes"<<'\n';
else
cout<<"No"<<'\n';
}
