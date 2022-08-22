#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x, y;
cin >> x >> y;
for(int i=1;i<=x;i++)
{
int a=x-i;
if(a*2+i*4==y || a*4+i*2==y)
{
cout<<"Yes";
return 0;
}
}
cout<<"No";
return 0;
}
