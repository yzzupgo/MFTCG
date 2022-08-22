#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long a,b;
cin>>a>>b;
if (b%2==1)
{
cout<<"No"<<endl;
return 0;
}
if (b%a==0)
{
a=b/a;
if (a==2 || a==3 || a==4)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
}
else
{
a=b/a;
if (a==2 || a==3)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
}
}
