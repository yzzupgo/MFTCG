#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if( y&1)
{
cout<<"No"<<endl;
}
else if(2*x>y || x*4<y)
{
cout<<"No"<<endl;
}
else
cout<<"Yes"<<endl;
}
