#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
long long ans=4*a-b;
if((ans>=0)&&(ans%2==0)&&((ans/2)<=a))
cout<<"Yes";
else
cout<<"No";
return 0;
}
