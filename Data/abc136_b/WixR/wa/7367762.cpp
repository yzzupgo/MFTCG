#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
#define ll long long
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi vector<ll>
#define el printf("\n")
#define N 100001
using namespace std;
ll fact(ll n)
{
ll res=1;
for(int i = 1; i <= n;i++){
res = res * i ;
}
return res;
}
ll pw(ll a, ll n)
{
ll ans=1;
while(n>0)
{
if (n%2!=0)
{
ans=ans*a;
}
a=a*a;
n=n/2;
}
return ans;
}
int main()
{ IOS;
ll n; cin >> n;
stringstream ss;
ss << n;
string str = ss.str();
ll x=str.size();
ll res=0;
if(n<10)
{
cout << n;
return 0;
}
if(x%2==1)
res+= n-(1*pw(10,x-1))+1;
x-=1;
while(x!=0)
{
if(x%2==1)
res+= 9*pw(10,x-1);
cout << res << "\n";
x--;
}
cout << res;
cout.precision(30);
return 0;
}
