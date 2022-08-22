#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define P pair<ll,ll>
#define F first
#define S second
#define vll vector<ll>
#define pb push_back
#define M 1000000007
#define for1(i,n) for(ll i=1;i<=n;i++)
#define for0(i,n) for(ll i=0;i<n;i++)
#define forab(i,a,b,c) for(ll i=a;i<=b;i+=c)
using namespace std;
int main()
{
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ll x, y;
cin >> x >> y;
if (4 * x - y >= 0 && (4 * x - y) % 2 == 0)
{
cout << "Yes" << "\n";
}
else
{
cout << "No" << "\n";
}
return 0;
}
