#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
int a,l;
cin>>a>>l;
if(l%2!=0)
{
cout<<"No"<<endl;
}
else
{
if((4*a-l)/2<0 || (l-2*a)/2<0)
{
cout<<"No"<<endl;
}
else
{
cout<<"Yes"<<endl;
}
}
return 0;
}
