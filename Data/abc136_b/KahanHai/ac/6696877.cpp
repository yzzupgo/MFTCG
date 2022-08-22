#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define mod 1000000007
#define endl "\n"
#define pb push_back
#define mp make_pair
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
if(n>99999)
{
cout<<90909;
return 0;
}
if(n>9999)
{
cout<<n-10000+1+909;
return 0;
}
if(n>999)
{
cout<<909;
return 0;
}
if(n>99)
{
cout<<n-100+1+9;
return 0;
}
if(n>9)
{
cout<<9;
return 0;
}
cout<<n;
return 0;
}
