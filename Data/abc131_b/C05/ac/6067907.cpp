#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a) (a).begin(),(a).end()
#define ll long long
int main(){
int N,L;
cin>>N>>L;
ll ans=N*(N-1)/2+L*N;
if(L<=0&&L+N-1>=0) cout<<ans<<endl;
else if(L>0) cout<<ans-L<<endl;
else cout<<ans-L-N+1<<endl;
}
