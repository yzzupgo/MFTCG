#include <iostream>
#define For(i,x,y) for(register int i=(x); i<=(y); i++)
using namespace std;
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int a,b;
cin>>a>>b;
if(b&1)cout<<"No"<<endl;
else
{
b/=2;
if(b-a<=a&&b-a>=0)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
return 0;
}
