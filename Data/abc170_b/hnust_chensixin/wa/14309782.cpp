#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int num1=y/4;
int num2=y%4;
if(num2>0)num1++;
if(x>=num1)printf("Yes\n");
else printf("No\n");
return 0;
}
