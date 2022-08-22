#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<int>
#define vll vector<ll>
#define mod 998244353
#define MAX 100005
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int x,y,i,j,p,q=-1;
cin>>x>>y;
for(i=0;i<=x;++i){
for(j=0;j<=x;++j){
p=(i*2) + (j*4);
if(p==y){
q=1;
}
}
}
if(q==-1){
cout<<"No";
}
else{
cout<<"Yes";
}
}
