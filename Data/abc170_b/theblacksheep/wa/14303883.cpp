#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
int main(void)
{
ll x,y;
cin >> x >> y;
ll c,t;
ll temp = y-(2*x);
if(temp<0)
cout << "No\n";
else
{
if(temp%2==1)
cout << "No\n";
else
{
t = temp/2;
c = x-t;
if(c > 0)
cout << "Yes\n";
else
cout << "No\n";
}
}
return 0;
}
