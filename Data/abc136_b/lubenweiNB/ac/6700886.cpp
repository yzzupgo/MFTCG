#include<iostream>
using namespace std;
int main()
{
int a;
long long b=900,d=90000,e=9;
cin>>a;
if(a<10)
{
cout<<a<<endl;
}
else if(a>=10&&a<100)
{
cout<<e<<endl;
}
else if(a>=100&&a<1000)
{
cout<<a-100+1+e<<endl;
}
else if(a>=1000&&a<10000)
{
cout<<b+e<<endl;
}
else if(a>=10000&&a<100000)
{
cout<<a-10000+1+e+b<<endl;
}
else if(a==100000)
{
cout<<"90909"<<endl;
}
return 0;
}
