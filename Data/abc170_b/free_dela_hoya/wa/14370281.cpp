#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7;
#define INF 1e9+9;
#define ps(x,y) fixed<<setprecision(y)<<x
#define PI 3.14159265358979323846264338327950 L
typedef long long ll;
typedef unsigned long long ull;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
int x,y;
cin>>x>>y;
int ans=4*x-y;
if(ans%2==0 && ans>=0 && ans<=y/2)
cout<<"Yes\n";
else
cout<<"No\n";
return 0;
}
