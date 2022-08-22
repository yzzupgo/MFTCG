#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define Phuong
typedef pair<int,int> ii;
int main()
{
#ifndef ONLINE_JUDGE
#endif
ios_base::sync_with_stdio(0);
cin.tie(NULL);
int n;
cin >> n;
int d=1;
ll ans=0;
if (n<10) ans=n; else
{
while (n>d*10-1)
{
ans+=d*10-d;
d*=100;
}
if (n>=d)
{
ans+=n-d+1;
}
}
cout << ans;
return 0;
}
