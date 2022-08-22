#include <bits/stdc++.h>
using namespace std;
#define long long long
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define fill(a,v) memset(a,v,sizeof(a))
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define INF 0x3f3f3f3f
#define JJ ios_base::sync_with_stdio(0); cin.tie(0)
#define MOD 1000000007
#define hash(n) unordered_map<int,int>mp(n)
int main()
{
JJ;
int x,y; cin>>x>>y;
if(y%2!=0 || y>(x*4) || y<(x*2))
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
}
