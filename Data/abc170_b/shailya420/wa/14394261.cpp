#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(x*4<y||y%2!=0)
cout<<"No"<<endl;
else if(y%x==2||y%x==1||y%x==3||y%x==0&&x*4>=y)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
