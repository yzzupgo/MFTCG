#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (ll i=0; i < n; i++)
int calc_digitnum(long long N) {
int res = 0;
while (N) {
++res;
N /= 10;
}
return res;
}
int main(){
ll n;
cin>>n;
ll ans=0;
for(int i=1;i<=n;i++){
if(calc_digitnum(i)%2==0){
ans++;
}
}
cout<<ans<<endl;
return 0;
}
