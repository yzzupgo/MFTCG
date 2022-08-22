#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define faster ios::sync_with_stdio(false)
#define ll long long int
#define sz 200005
#define mp(x,y) make_pair(x,y)
#define pii pair<long long int,long long int>
#define tor ::iterator
#define letsgo long long int i,j,k,q=0,t,tmp,n,flg=0,cntr=0,maxxer = 0
#define fi first
#define se second
#define be begin()
#define en end()
#define mod 1000000007
#define debug(x) cout<<" "<<x<<endl
ll dp[105][100005] ;
ll knapsack(ll i,ll w,ll wt[],ll v[],ll n){
if(i==n)
return 0;
if(dp[i][w]!=-1)
return dp[i][w];
if( wt[i]<= w){
dp[i][w] = max(knapsack(i+1,w,wt,v,n)
,knapsack(i+1,w-wt[i],wt,v,n)+v[i]);
}
else
dp[i][w] = knapsack(i+1,w,wt,v,n);
return dp[i][w];
}
int main(){
faster;
letsgo;
ll w;
cin>>n>>k;
if(k>13)
cout<<k;
else if(k<13 && k>=6)
cout<<k/2;
else
cout<<0;
}
