#include<bits/stdc++.h>
using namespace std;
main()
{
int a;
cin>>a;
if(a<10)cout<<a;
if(a<100&&a>10)cout<<9;
else if(a<1000&&a>=100)
cout<<9+a-100+1;
else if(a<10000&&a>=1000)
cout<<909;
else if(a<100000&&a>=10000)
cout<<909+a-10000+1;
else if(a==100000)
cout<<909090;
}
