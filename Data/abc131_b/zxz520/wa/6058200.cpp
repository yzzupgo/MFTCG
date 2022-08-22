#include <stdlib.h>
#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#define ll long long
const int INF=0x3f3f3f3f;
#define mod 1000000007
using namespace std;
int s[300];
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
s[i]=i;
int m;
cin>>m;
m--;for(int i=1;i<=n;i++)
s[i]+=m;
sort(s+1,s+1+n);
int sum=0;
int ma=s[1];
for(int i=1;i<=n;i++)
{ sum+=s[i];
if(s[i]<0)
ma=max(ma,s[i]);}
cout<<sum-ma<<endl;
}
