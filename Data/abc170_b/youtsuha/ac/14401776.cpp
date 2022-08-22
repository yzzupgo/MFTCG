#include <iostream>
#define For(i,x,y) for(register int i=(x); i<=(y); i++)
using namespace std;
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int x,y,a,b;
cin>>x>>y;
For(i,0,x)
{
a=i;b=x-i;
if(a*2+b*4==y)
{
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
