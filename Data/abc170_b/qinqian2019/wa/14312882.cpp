#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(y%2==1)
cout<<"No"<<endl;
else if(y>3*x)
cout<<"No"<<endl;
else if((y-2*x)%2==1||(4*x-y)%2==1)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
}
