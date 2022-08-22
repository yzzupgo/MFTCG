#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y,flag=0,i;
cin >> x >>y;
if(x%2==0){
for(i=1;i<=x;i++)
{
if(y==(i*2)+(x-i)*4)
{
flag=1;
break;
}
}
}else
cout <<"No";
if(flag==1)
cout<<"Yes";
else
cout <<"No";
}
