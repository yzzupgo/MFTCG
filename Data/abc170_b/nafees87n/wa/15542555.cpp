#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x,y;
cin>>x>>y;
if((x%2)*6+(x/2)*2==y || (x%2)*2+(x/2)*6==y )
{
cout<<"YES";
}
else if((x%2)*6+(x/2)*4==y || (x%2)*4+(x/2)*6==y)
{
cout<<"YES";
}
else
{
cout<<"NO";
}
return 0;
}
