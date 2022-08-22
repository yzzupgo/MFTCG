#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int a=n*2,b=n*4,c=m%2;
if(m>=a&&m<=b&&!c)
cout<<"Yes"<<endl;
else
cout<<"N0"<<endl;
}
