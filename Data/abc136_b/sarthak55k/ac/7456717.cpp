#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
if(n<10)
{
cout<<n<<"\n";
}
else if(n<100)
{
cout<<"9\n";
}
else if(n<1000)
{
cout<<n-90<<"\n";
}
else if(n<10000)
{
cout<<"909\n";
}
else if(n<100000)
{
cout<<n-9090<<"\n";
}
else if(n==100000)
{
cout<<"90909\n";
}
}
