#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios::sync_with_stdio(false)
#define pb push_back
#define mp make_pair
#define precision(x,d) cout<<fixed<<setprecision(d)<<x
#define all(x) (x).begin(), (x).end()
#define uint usigned int
typedef vector <ll> vi;
ll mod=1918;
//vi v1[200005],v2;
//bool visit[200005]={false};

/*void bfs(ll n){
    queue<ll> q;
    q.push(n);
    visit[n]=true;
    while(!q.empty()){
        ll t=q.front();
        q.pop();
        v2.pb(t);
        for(ll i=0;i<v1[t].size();i++){
            if(visit[v1[t][i]]==false){
                q.push(v1[t][i]);
                visit[v1[t][i]]=true;
            }
        }
    }
}*/
/*void dfs(ll n){
    for(ll i=0;i<v1[n].size();i++)
    {
        ll y=v1[n][i];
        if(visit[y]==0)
        {
            v2.pb(y);
            visit[y]=1;
            dfs(y);
        }
    }
}*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    ll i,e,k,x=0,p,y=200,ans=0,m=0;
    bool b[5]={false};
    ll a[5];
    for(i=0;i<5;i++){
         cin>>a[i];
         if(a[i]%10==0){
             ans+=a[i];
             b[i]=true;
         }
         else y=min(y,a[i]%10);
    }
    for(i=0;i<5;i++){
        if(b[i]==false){
        ans+=a[i];
        while(ans%10!=0) ans++;
        }
    }
    cout<<ans-(10-y);
    return 0; 
}