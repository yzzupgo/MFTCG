#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int flag;
if(y%2!=0)flag=0;
else{
int num1=y/4;
int num2=y%4;
if(num2>0)num1++;
int num3=y/2;
if(x>=num1&&x<=num3)flag=1;
else flag=0;
}
if(flag)printf("Yes\n");
else printf("No\n");
return 0;
}
