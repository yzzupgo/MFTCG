#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pii acos(-1)
#define fo(i0n) for(i=0;i<n;i++)
#define fo(i1n) for(i=1;i<=n;i++)
#define fo(j0n) for(j=0;j<n;j++)
#define fo(j1n) for(j=1;j<=n;j++)
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define pf push_front
#define pu push
#define bg begin
#define en end
using namespace std;
int main()
{
fast();
ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,g,x,y,l;
ld bb,cc,aa;
string st,et,ft;
priority_queue<ll,vector<ll>,greater<ll> > pq,aq,dq;
map<ll,ll> ma,ta;
map<ll,ll,greater<ll> >sa;
set<ll> se,pe,me;
vector<ll > vv,v,s,ss;
cin>>a>>b;
c = 0;
d = 0;
f = 0;
for(i=0;i<=a;i++){
c = i;
d = a-i;
c = c*2;
d= d*4;
if(c+d==b){f=1;break;}
}
if(f==1)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
