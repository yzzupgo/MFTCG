#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
if(n<10)
{
cout<<n<<endl;
}
else if(n<=99)
{
cout<<"9"<<endl;
}
else if(n>=100&&n<=999)
{
printf("%d\n",(n-99)+9);
}
else if(n>=1000&&n<=9999)
{
cout<<"909"<<endl;
}
else if(n>=10000&&n<=100000)
{
if(n==100000)
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
