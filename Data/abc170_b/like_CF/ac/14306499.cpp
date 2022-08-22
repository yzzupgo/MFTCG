#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int ans1=n*2,ans2=n*4;
if(m>=ans1&&m<=ans2&&m%2==0)
cout<<"Yes";
else
cout<<"No";
return 0;
}
