#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c=0;
cin>>a>>b;
for(int i=1;i<=a;i++)
if(i*2+(a-i)*4==b)
{
c=1;
break;
}
if(c) cout<<"Yes";
else cout<<"No";
return 0;
}
