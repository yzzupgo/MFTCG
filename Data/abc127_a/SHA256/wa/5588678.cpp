#include<bits/stdc++.h>
#define ll long long
#define hell 1000000007
#define F first
#define re 15000000
#define S second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define rep(i,a,b) for(ll int i = a;i<b;i++)
#define pi 3.1415926536
#define Mod 998244353
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(a>12)
cout<<b;
if(a>=6 && a<=12)
cout<<b/2;
else
cout<<0;
}
