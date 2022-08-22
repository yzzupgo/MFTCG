#include<iostream>
using namespace std;
int main()
{
int x,y,c,t;
cin>>x>>y;
c=(4*x-y)/2;
t=(y-2*x)/2;
if(y%2!=0||x*4<y)
{
cout<<"No";
}
else{
cout<<"Yes";
}
return 0;
}
