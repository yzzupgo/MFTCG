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
if((y-2*x)%2==0 && (4*x-y)%2==0)
{
cout<<"Yes";
}
else cout<<"No";
return 0;
}
