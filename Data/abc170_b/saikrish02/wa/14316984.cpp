#include<iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(x>=y/4 && x<=y/2 && y%2==0)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
return 0;
}
