#include <bits/stdc++.h>
using namespace std;
#define s size
#define pb push_back
#define in insert
#define PI 3.1415926535897932384626433832795
#define MOD 100000007
#define F first
#define S second
#define aLL(str) (str).begin(), (str).end()
#define IOS \
ios::sync_with_stdio(0); \
cin.tie(0); \
cout.tie(0)
#define ll long long
typedef vector<ll> vl;
typedef map<ll,ll> ml;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
int main()
{IOS;
int t;
t=1;
while(t--)
{ll x,y,a,b;
cin>>x>>y;
a=x*2;
b=x*4;
if(y<=b && y>=a)cout<<"Yes";
else cout<<"No";
}
return 0;}
