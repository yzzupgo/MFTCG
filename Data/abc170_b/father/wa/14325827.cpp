#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
long long ans=4*a-b;
if(ans%2==0&&ans>=0&&(ans/2)<=a)
cout<<"YES";
else
cout<<"NO";
return 0;
}
