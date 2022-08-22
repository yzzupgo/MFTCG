#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
int x,y,i=0,j=0;
cin>>x;
cin>>y;
j=y/2-x;
i=2*x-y/2;
if(y%2==0)
{
if(x==1 && (y==2 || y==4))
{
cout<<"Yes";
}
else if(i>=0 && j>=0)
{
cout<<"Yes";
}
else{
cout<<"No";
}
}
else {
cout<<"No";
}
return 0;
}
