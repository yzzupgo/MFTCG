#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x,y;
cin>>x>>y;
int c,t;
c = ((4*x) -y)/2;
t = (y- (2*x))/2;
if((c+t == x )&&(c>0)&&(t>0))
{
cout<<"Yes";
}
else
{
cout<<"No";
}
return 0;
}
