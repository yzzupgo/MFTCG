#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const ll INF=1LL<<60;
const int inf=1<<30;
const int mod=1e9+7;
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
int n,l;cin >> n >> l;
int sum=0;
for(int i=0;i<n;i++){
sum+=l+i;
}
int m=inf,ans;
for(int i=0;i<n;i++){
int t=abs(l+i);
if(t<m){
ans=sum-l-i;
m=t;
}
}
cout << ans << endl;
}
