#include<iostream>
using namespace std;
int main()
{
int x,y,c,t;
cin>>x;
cin>>y;
if(y%2!=0)
{
cout<<"No"<<endl;
return 0;
}
c=2*x -y/2;
t=y/2 -x;
if(c>=0 && t>=0)
cout<<"Yes";
else
{
cout<<"No";
}
return 0;
}
