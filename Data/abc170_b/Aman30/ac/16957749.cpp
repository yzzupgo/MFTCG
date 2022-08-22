#include<bits/stdc++.h>
using namespace std;
#define pai acos(-1)
#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair
#define pll pair<ll,ll>
#define sz(a) (ll)a.size()
#define endl "\n"
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a)*((b)/gcd(a,b))
#define all(vec) vec.begin(),vec.end()
#define ms(a,b) memset(a,b,sizeof(a))
#define TEST_CASE(t) for(int zz=1;zz<=t;zz++)
#define PRINT_CASE printf("Case %d: ",zz)
#define fii freopen("input.txt","r",stdin);
#define foo freopen("output.txt","w",stdout);
#define FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
const ll M = 1e9+7;
const ll mxn = 1e5+7;
int main()
{
ll i,j,k,a,b,c,d,n,m,t,x,y,z,u,v;
cin>>n>>m;
a=n*2;
b=n*4;
if(m>=a && m<=b && m%2==0)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
return 0;
}
