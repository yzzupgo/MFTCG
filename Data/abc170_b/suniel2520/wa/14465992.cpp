#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y,flag=0,i;
cin >> x >>y;
if(y%2==0){
for(i=1;i<=x;i++)
{
if(y==(i*4)+(x-i)*2)
{
flag=1;
break;
}
}
}else
flag=0;
if(flag==1)
cout<<"Yes";
else
cout <<"No";
}
