#include <bits/stdc++.h>
#define int long long
#define ll long long int
#define mp make_pair
#define pb push_back
#define ld long double
#define pii pair<int,int>
#define sz(x) (int)x.size()
#define piii pair<pii,pii>
#define precise cout<<fixed<<setprecision(10)
#define st first
#define nd second
#define ins insert
#define vi vector<int>
#define BOOST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int32_t main()
{
BOOST;
int x,y;
cin>>x>>y;
int b=(y-2*x)/2;
int a=x-b;
if (a>=0 && b>=0 && (y-2*x)%2==0)cout<<"Yes";
else cout<<"No";
return 0;
}
