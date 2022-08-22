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
b=b/2;
if(b<a || b>a*2)
{
cout<<"NO"<<endl;
return 0;
}
cout<<"YES"<<endl;
return 0;
return 0;
}
