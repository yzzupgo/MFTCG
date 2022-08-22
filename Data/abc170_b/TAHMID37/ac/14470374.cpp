#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define pb push_back
#define fi first
#define se second
#define in insert
#define mp make_pair
#define GCD(a,b) __gcd(a,b);
#define endl "\n"
#define FRU freopen("out.txt","w",stdout)
#define FRO freopen("in.txt","r",stdin)
#define INFLL 9223372036854775807
#define debug 0
#define MAXN 100001
int main()
{
fastio;
ll i;
ll a,b;
cin>>a>>b;
ll c=a*4;
ll d=a*2;
if(b%2==0&&(d<=b&&b<=c))
{
cout<<"Yes"<<endl;
}
else
cout<<"No"<<endl;
}
