#include<iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int z=(y-(2*x))/2;
if(x<y && z>=0 && z<=x &&(y-(2*x))%2==0)
{cout<<"Yes";}
else
{ cout<<"No";}
return 0;
}
