#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
for(int i=1;i<=x;i++)
{
int k=x-i;
if((i*2)+ (4*k)==y)
{
cout<<"YES"<<endl;
return 0;
}
}
cout<<"NO"<<endl;
}
