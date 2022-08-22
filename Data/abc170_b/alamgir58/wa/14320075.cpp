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
int a,b,x,y;
cin>>a>>b;
if(b%2==1)
cout<<"NO"<<nl;
else if(4*a<b)
cout<<"NO"<<nl;
else if(4*a==b)
cout<<"Yes"<<nl;
else if(2*a==b)
cout<<"Yes"<<nl;
else
{
x=((a+1)/2)*2;
y=a-((a+1)/2);
if((x+(4*y))==b)
cout<<"Yes"<<nl;
else cout<<"No"<<nl;
}
return 0;
}
