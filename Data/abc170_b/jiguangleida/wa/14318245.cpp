#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,tui;
cin>>n>>tui;
for(int i=1;i<=1000000;i++)
{
int s=n-i;
if(i*2+s*4==tui)
{
cout<<"Yes";
return 0;
}
}
cout<<"No";
return 0;
}
