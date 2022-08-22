#include <bits/stdc++.h>
using namespace std;
#include <string.h>
#define ll long long int
int main(void)
{
int x,y;
cin>>x>>y;
if(y%2!=0)
{
cout<<"No"<<endl;
}
for (int i=0; i<=x; i++)
{
if((2*i+4*(x-i))==y)
{
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
