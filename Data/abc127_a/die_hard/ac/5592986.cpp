#include<iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(b%2==1) return 0;
if(a>=13) cout<<b<<'\n';
else if(a<=12&&a>=6) cout<<(b/2)<<'\n';
else cout<<0<<'\n';
return 0;}
