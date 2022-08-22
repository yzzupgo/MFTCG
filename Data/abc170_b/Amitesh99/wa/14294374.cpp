#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long a,b;
cin>>a>>b;
if (b%a==0)
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
else
{
a=b/a;
if (a==2)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
}
}
