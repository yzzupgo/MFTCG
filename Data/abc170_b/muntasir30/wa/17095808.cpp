#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,a,b,c,d;
cin>>x>>y;
a=x*2;
b=x*4;
c=((x-1)*2)+((x-2)*4);
d=((x-1)*4)+((x-2)*2);
if(a==y)
cout<<"Yes"<<endl;
else if(b==y)
cout<<"Yes"<<endl;
else if(c==y)
cout<<"Yes"<<endl;
else if(d==y)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
