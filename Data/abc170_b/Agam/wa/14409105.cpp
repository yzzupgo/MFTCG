#include<bits/stdc++.h>
using namespace std;
int main()
{
int X,Y,x,y;
cin>>X>>Y;
x=(4*X-Y)/2;
y=(Y-2*X)/2;
if(x<0&&y>0)
x=0;
if(x>0&&y<0)
y=0;
if(x<0&&y<0)
{
x=0;
y=0;
}
if(x+y==X)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
