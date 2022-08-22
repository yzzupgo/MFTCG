#include<bits/stdc++.h>
#include <math.h>
using namespace std;
#define ll long long int
#define dbl double
#define pi acos(-1)
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define pb push_back
#define mxx 100000
map<string,ll>mp,mp2;
map<ll,ll>vis1;
map<ll,ll>vis;
map<ll,ll>vis_s;
map<pair<ll,ll>,ll>vis2;
priority_queue<ll>pq;
priority_queue<ll>pq2;
vector<ll>vec;
vector<ll>vec_s;
vector<ll>vec1;
map<vector<ll>,ll>mp3;
ll ara[1000006],ara1[1000006];
ll dx[]= {-1,0,+1,-1,+1,-1,0,+1};
ll dy[]= {-1,-1,-1,0,0,+1,+1,+1};
string v="aeiou";
ll n,m,t,cnt=0,a,b,c=0,no,d,sum=0,ans=0,item,mx=0,mn=10000000;
int main()
{
sc2(n,m);
for(ll i=1;i<n;i++){
ll no=i*2+(n-i)*4;
if(no==m){
cout<<"YES"<<endl;
return 0;
}
}
cout<<"NO"<<endl;
return 0;
}
