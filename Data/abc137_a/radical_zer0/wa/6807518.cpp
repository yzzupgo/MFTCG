#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
const int MOD = 1e9+7, N = 1e7 + 10;
int main(){
int a,b;
sd(a);
sd(b);
int s = a+b;
int m = a-b;
int M = a*b;
int ans;
if(a*b > 0)
ans = M;
else if(s>m)
ans = s;
else ans = m;
pd(ans);
return 0;
}
