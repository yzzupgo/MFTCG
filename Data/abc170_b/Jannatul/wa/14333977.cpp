#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if (x==1 && (y==2 || y==4))
cout<<"Yes"<<endl;
else if(x*2>=y || x*4<=y)
cout<<"No"<<endl;
else if(y%2==0 && y<x*4 && y!=x*2)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
