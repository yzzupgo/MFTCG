#include<bits/stdc++.h>
using namespace std;
#define rep(i,x,y) for(int i=x;i<y;i++)
#define range(a) a.begin(),a.end()
#define print(A,n) rep(i,0,n){cout<<(i ? " ":"")<<A[i];}cout<<endl;
#define pprint(A,m,n) rep(j,0,m){print(A[j],n);}
const long mod=1e9+7;
const int size=2e5;
const int INF=1e9;
int main(){
int N;cin>>N;int ans=0;
rep(i,1,N+1){
int temp=i;int count=0;
while(temp!=0){
temp/=10;
count++;
}if(count%2==1) ans++;
}cout<<ans<<endl;
}
