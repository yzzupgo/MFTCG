#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(b%2!=0)
{
cout<<"NO"<<endl;
return 0;
}
if(b/2<a || b/2>(a*2))
{
cout<<"NO"<<endl;
return 0;
}
else
{
cout<<"YES"<<endl;
return 0;
}
return 0;
}
