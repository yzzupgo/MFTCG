#include<bits/stdc++.h>
using namespace std;
#define rep(i,x,y) for(int i=x;i<y;i++)
#define print(a,n) rep(i,0,n){ cout<<(i ? " ":"")<<a[i]; }cout<<endl;
const long mod=1e9+7;
int main(){
int N;cin>>N;int ans=0;
rep(i,1,N+1){
int temp=i;int count=0;
while(temp!=0){
temp/=10;
count++;
}if(count%2==0) ans++;
}cout<<ans<<endl;
}
