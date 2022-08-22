#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int a=x;
int b=0;
int ans=0;
for(int i=0;i<x;i++)
{
if((a*2+b*4)==y)
{
ans++;
cout<<"Yes"<<endl;
break;
}
a--;
b++;
}
if(ans==0)
{
cout<<"No"<<endl;
}
}
