#include<iostream>
using namespace std;
int main()
{
long long int x,y;
cin>>x>>y;
if(y>=2*x && 4*x>=y)
{
if((y-2*x)%2==0 && (4*x-y)%2==0)
cout<<"Yes";
else
cout<<"No";
}
else
cout<<"No";
return 0;
}
