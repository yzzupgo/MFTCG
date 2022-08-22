#include <bits/stdc++.h>
using namespace std;
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define test ll t; cin>>t; while(t--)
#define ub(a,x) upper_bound(a.begin(),a.end(),x)-a.begin()
#define lb(a,x) lower_bound(a.begin(),a.end(),x)-a.begin()
#define ll long long
#define endl "\n"
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define pb push_back
#define PI 3.1415926535897932384626
#define inf 1e18
#define forn(i,n) for (int i = 0; i < int(n); i++)
#define MOD 1000000007
int main()
{
speed;
ll a,b;
cin>>a,b;
cout<<max(a-b,max(a+b,a*b))<<endl;
return 0;
}
