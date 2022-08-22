#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if (x==1 && (y==2 || y==4))
cout<<"Yes"<<endl;
else if(y%2==0 && y/4<x && y/2!=x)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
