#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
if(n<=99)
{
cout<<"9"<<endl;
}
else if(n>=100&&n<1000)
{
printf("%d\n",(n-99)+9);
}
else if(n>1000&&n<=9999)
{
cout<<"909"<<endl;
}
else if(n>=10000&&n<=1000000)
{
if(n==1000000)
{
cout<<"90909"<<endl;
}
else
{
printf("%d\n",(n-9999)+909);
}
}
return 0;
}
