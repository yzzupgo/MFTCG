#include<iostream>
using namespace std;
int main()
{
int x,y;
if(y>=2*x && 4*x>=y)
{
if((y-2*x)%2==0 && (4*x-y)==0)
cout<<"Yes";
else
cout<<"No";
}
else
cout<<"No";
return 0;
}
