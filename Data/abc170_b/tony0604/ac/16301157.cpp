#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef map<ll,ll>::iterator itll;
typedef long double ld;
typedef map<ll,ll> mapll;
#define con continue
#define pb push_back
#define fi first
#define se second
#define fr front()
#define INF 1000000000000000000
#define all(vl) vl.begin(),vl.end()
#define m_p make_pair
#define sz(a) sizeof(a)
#define forn(mp,it) for(it = mp.begin();it!=mp.end();it++)
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define FORE(i,a,n) FOR(i,a,n+1)
#define Endl endl
#define eNdl endl
#define enDl endl
#define endL endl
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
cout.tie(nullptr);
cerr.tie(nullptr);
ll animals,legs;
cin>>animals>>legs;
ll crane = 2,turtle = 4;
FORE(i,0,animals)
{
ll cranel = i*crane;
ll turtlel = (animals-i)*turtle;
if(cranel+turtlel == legs)
{
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
