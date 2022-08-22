#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(y>=2*x && 3*x>=y)
{
if(y%2==0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
else
cout<<"No"<<endl;
return 0;
}
