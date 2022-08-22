#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
for(int i=0;i<x+1;i++)
{
int j=x-i;
if(2*i+4*j == y)
{
cout<<"Yes";
return 0;
}
}
cout<<"No";
return 0;
}
