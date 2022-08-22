#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int a,b;
cin>>a>>b;
if(a>=13)
cout<<b<<endl;
if(6<=a<=12)
cout<<b/2<<endl;
if(a<=5)
cout<<"0"<<endl;
}
return 0;
}
