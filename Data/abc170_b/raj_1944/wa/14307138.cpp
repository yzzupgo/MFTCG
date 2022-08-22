#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout<<setprecision(9)<<fixed;
int x,y;
cin>>x>>y;
int x1=x,y1=y;
int x2=0;
int f=0;
while(y>1&&x1>0)
{
if(x1*4+x2*2==y1)
{
f=1;
break;
}
y-=2;
x1--;
x2++;
}
if(f==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
