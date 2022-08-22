#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define rep(i,a,b) for(i=a;i<b;i++)
#define ll long long int
#define ld long double
using namespace std;
int main()
{
IOS;
ll n,i;
cin>>n;
if(n<10)
cout<<n;
else
if(n>=10 && n<100)
cout<<'9';
else
if(n>=100 && n<1000)
cout<<9+(n-100)+1;
else
if(n>=1000 && n<10000)
cout<<"909";
else
if(n==100000)
cout<<909+(n-10000);
else
cout<<910+(n-10000);
return 0;
}
