#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(b%2!=0)
{
cout<<"NO"<<endl;
}
else
{
if(b/2<a || b>(a*4))cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
}
return 0;
}
