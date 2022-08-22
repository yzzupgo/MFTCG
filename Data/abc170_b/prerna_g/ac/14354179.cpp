#include <math.h>
#include <bits/stdc++.h>
#include <deque>
#include<vector>
#define ll long long
#define l long double
#define pi 3.14159265358979323846
#define mod 1000000007
#define vali 1000000000000000000
using namespace std;
int main()
{
ll a,b;
cin>>a>>b;
ll s=b/2;
ll s1=b%2;
ll x,y;
x=2*a-s;
y=s-a;
if(x>=0 && y>=0 && s1==0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
