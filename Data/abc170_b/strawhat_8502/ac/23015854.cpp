#include<iostream>
#include<string>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int x,y;
cin>>x>>y;
for(int i=0;i<=x;i++)
{
if(2*i+4*(x-i)==y)
{
cout<<"Yes";
return 0;
}
}
cout<<"No";
return 0;
}
