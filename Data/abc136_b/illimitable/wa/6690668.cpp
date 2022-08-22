#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int countDigit(long long n)
{
return floor(log10(n) + 1);
}
int main()
{
ll n1;
cin>>n1;
int n = countDigit(n1);
if(n==1)
cout<<n;
else if (n==2)
{
cout<<9;
}
else if(n==3)
{
ll ans = 9 + (n1-100) + 1;
cout<<ans;
}
else if(n==4)
{
ll ans = 900 + 9;
cout<<ans;
}
else if(n==5)
{
ll ans = 9 + 900 + (n1-1000) + 1;
cout<<ans;
}
else if(n==6)
{
ll ans = 9 + 900 + 90000;
cout<<ans;
}
cout<<endl;
return 0;
}
