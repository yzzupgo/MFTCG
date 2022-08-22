#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int m=n;
int cnt=0;
while(m)
{
m/=10;
cnt++;
}
if(cnt==1)
cout<<n<<endl;
else if(cnt==2)
cout<<9<<endl;
else if(cnt==3)
cout<<n-100+10<<endl;
else if(cnt==4)
cout<<1000-100+9<<endl;
else if(cnt==5)
cout<<n-10000+1000-100+9<<endl;
else if(cnt==6)
cout<<100000-10000+1000-100+9<<endl;
}
