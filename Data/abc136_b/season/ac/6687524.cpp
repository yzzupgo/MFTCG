#include<bits/stdc++.h>
using namespace std;
#define itn int
#define rep(i,x,y) for(int i=x;i<y;i++)
#define range(a) a.begin(),a.end()
#define print(A,n) rep(i,0,n){cout<<(i ? " ":"")<<A[i];}cout<<endl;
#define pprint(A,m,n) rep(j,0,m){print(A[j],n);}
const long mod=1e9+7;
const int size=1e5;
const int INF=1e9;
int main(){
int N;cin>>N;
int j,c;int ans=0;
rep(i,1,N+1){
j=i;c=0;
while(j>0){
j/=10;
c++;
}if(c%2==1) ans++;
}cout<<ans<<endl;
}
