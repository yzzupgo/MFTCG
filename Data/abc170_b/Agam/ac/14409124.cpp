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
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
