#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
#define debug(x) cout<<"the value of "<<#x<<" is "<<x<<endl;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
int x,y;
cin>>x>>y;
int minn=y/4;
int maxx=y/2;
if(x>=minn&&x<=maxx)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
