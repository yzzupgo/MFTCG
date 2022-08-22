#include<bits/stdc++.h>
#define ll long long
#define fornum(A,B,C) for(A=B;A<C;A++)
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
using namespace std;
ll N,L;
ll i,ans;
int main(){
scanf("%lld%lld", &N,&L);
ans = N * L;
fornum(i,1,N){
ans += i;
}
if(L<0){
if(-L>=N){
ans -= (L + N - 1);
}
}else{
ans -= L;
}
printf("%lld",ans);
return 0;
}
