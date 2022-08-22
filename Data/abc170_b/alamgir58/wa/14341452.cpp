#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sq(x) (x)*(x)
#define PI acos(-1.0)
#define nl '\n'
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
int a,b,x,y,cnt=0;
cin>>a>>b;
for(int i=0; i<=a; i++)
{
x=i*2;
y=(a-i)*4;
if((x+y)==b)
{
cnt=1;
break;
}
}
if(cnt==1)
cout<<"Yes"<<nl;
else cout<<"NO"<<nl;
return 0;
}
