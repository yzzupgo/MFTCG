#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
long long ans=4*a-b;
long long q=4*a-b;
if(ans%2==0&&q>=0&&(q/2)<=a)
cout<<"YES";
else
cout<<"NO";
return 0;
}
