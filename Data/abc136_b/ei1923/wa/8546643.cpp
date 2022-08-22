#include<bits/stdc++.h>
#define INF 9223372036854775807LL
#define inf 1000000007
#define SYOU(x) setprecision(x+1)
#define abs(x,y) (max(x,y)-min(x,y))
#define lol long long
#define mp make_pair
#define fi first
#define se second
using namespace std;
lol a,b,x,y;
lol i[101];
lol sum[1000001];
lol dp(lol n){
if(n<3) return 0;
if(n==3) return 1;
if(sum[n]!=0) return sum[n];
return sum[n]=(dp(n-1)+dp(n-2)+dp(n-3))%inf;
}
signed main(){
cin.tie(0);
ios::sync_with_stdio(false);
lol c,d=0,e=0,f=0,g=1,h=0;
cin >>a;
if(a<100){
cout <<min(a,9LL)<<'\n';
return 0;
}
if(a<10000){
if(a>=1000) cout <<9+900<<'\n';
else cout <<9+a-99<<'\n';
return 0;
}
cout <<909+a-10000<<'\n';
return (0);
}
