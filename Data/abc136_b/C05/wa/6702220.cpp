#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a) (a).begin(),(a).end()
#define ll long long
int main(){
int N;
cin>>N;
int M,cnt=0;
M=N;
while(M){
cnt++;
M/=10;
}
int ans=0;
rep(i,cnt) if(i%2) ans=ans*100+9;
int X=1;
rep(i,cnt-1) X*=10;
if(cnt%2) ans+=N%X+1;
if(N<10) ans=N;
cout<<ans<<endl;
}
