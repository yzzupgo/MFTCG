#include<bits/stdc++.h>
#define con continue
#define pb push_back
#define fi first
#define se second
#define fr front()
#define one 1.0
#define inf 1000000000000000000
#define ret return
#define all(vl) vl.begin(),vl.end()
#define sor sort
#define cl clear
#define m_p make_pair
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef map<ll,ll>::iterator itll;
typedef long double ld;
typedef map<ll,ll> mapll;
typedef map<string,ll> mapstl;
int main()
{
ll a,b;
cin>>a>>b;
ll x = a,y = 0;
bool isok = false;
while(x>=0)
{
if(x<0)break;
ll cnt = x*2+y*4;
if(cnt == b)isok = true;
x--;y++;
}
if(isok)cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
