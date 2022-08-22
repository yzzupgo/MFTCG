#include <bits/stdc++.h>
using namespace std;
bool legs(int x,int y)
{
for(int i=0;i<x;i++)
{
int temp=x-i;
int sum=temp*2+i*4;
if(sum==y)
return true;
}
return false;
}
int main()
{
int x,y;
cin>>x>>y;
bool A=legs(x,y);
if(A)
cout<<"Yes";
else cout<<"No";
return 0;
}
