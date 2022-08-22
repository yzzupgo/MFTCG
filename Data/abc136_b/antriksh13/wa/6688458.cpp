#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int countDigit(long long n)
{
return floor(log10(n) + 1);
}
int main() {
ll n,count=0;
cin>>n;
for(ll i=0;i<n;i++)
{
if(countDigit(i)%2==1)
++count;
}
cout<<count;
return 0;
}
