#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
const int mxN = 1e5+5;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int x,y;
cin>>x>>y;
if(y&1)cout<<"No";
else if(y <= 4*x && y >= 2*x)
{
cout<<"Yes";
}
else cout<<"No";
return 0;
}
