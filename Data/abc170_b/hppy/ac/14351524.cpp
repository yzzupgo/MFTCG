#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007
int main()
{
fast()
int x,y;
cin>>x>>y;
int Y=(y-2*x);
if(y%1)
cout<<"No";
else if(Y<0)
cout<<"No";
else if(Y%2!=0)
cout<<"No";
else if((Y/2)<=x)
cout<<"Yes";
else
cout<<"No";
}
