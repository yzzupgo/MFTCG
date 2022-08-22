#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int m = n;
int cnt = 0;
while(m!=0)
{
m = m/10;
cnt++;
}
if(cnt==1)
{
cout<<n<<endl;
return 0;
}
if(cnt==2)
{
cout<<"9"<<endl;
return 0;
}
if(cnt==3)
{
cout<<n-100+10<<endl;
return 0;
}
if(cnt==4)
{
cout<<"909"<<endl;
return 0;
}
if(cnt==5)
{
cout<<n-10000+910<<endl;
return 0;
}
if(cnt==6)
{
cout<<"90909"<<endl;
return 0;
}
return 0;
}
