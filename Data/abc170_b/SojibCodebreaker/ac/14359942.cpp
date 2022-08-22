#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(b%2!=0)
{
cout<<"No"<<endl;
}
else
{
if(b/2<a || b>(a*4))cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
}
return 0;
}
