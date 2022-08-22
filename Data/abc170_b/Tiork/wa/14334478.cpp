#include<iostream>
using namespace std;
#define f(i,a,b) for(int i=a;i<=b;++i)
int main()
{
int x,y;
cin>>x>>y;
if(x*4>=y&&x*2<=y&&y%2==0) cout<<"YES";
else cout<<"NO";
return 0;
}
