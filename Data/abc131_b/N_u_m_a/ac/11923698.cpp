#include<bits/stdc++.h>
using namespace std;
#define ll long long
using P = pair<ll, ll>;
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define PI acos(-1)
#define fast_io ios_base::sync_with_stdio(false) ; cin.tie(0); cout.tie(0);
ll mod=1e9+7;
int main(){
fast_io
int N,L;
cin>>N>>L;
vector<int> A(N);
int minu=100100;
int ans=0;
rep(i,N){
A[i]=L+i;
ans+=A[i];
if(abs(minu)>=abs(A[i])){
minu = A[i];
}
}
cout<<ans-minu<<endl;
return 0;
}
