#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,n) for(int i=(int)(j);i<(int)(n);i++)
#define REP(i,j,n) for(int i=(int)(j);i<=(int)(n);i++)
#define MOD 1000000007
#define int long long
#define ALL(a) (a).begin(),(a).end()
#define vi vector<int>
#define vii vector<vi>
int X(int Y){
return Y>=0?Y:-Y;
}
signed main(){
int N,L;
cin>>N>>L;
int ans=0,sum=MOD;
rep(i,0,N){
ans+=L+i;
sum=min(sum,X(L+i));
}
cout<<ans-sum<<endl;
}
