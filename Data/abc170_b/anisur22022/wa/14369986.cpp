#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a,b,c,i,j;
cin>>a>>b;
if((b&1)&&(a*4<b)) cout<<"No"<<endl;
else
{
if(b%4==0)c=b/4;
else c=c+1;
i=b/2;
if(a>=c&&a<=i)
{
cout<<"Yes"<<endl;
}
else cout<<"No"<<endl;
}
}
