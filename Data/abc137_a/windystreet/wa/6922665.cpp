#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define eps 1e-5
#define gcd __gcd
#define pb push_back
#define PI acos(-1.0)
#define lowbit(x) (x)&(-x)
#define bug printf("!!!!!\n");
#define mem(x,y) memset(x,y,sizeof(x))
typedef long long LL;
typedef long double LD;
typedef pair<int,int> pii;
typedef unsigned long long uLL;
const int maxn = 1e5+7;
const int INF = 1<<30;
const int mod = 1e9+7;
void solve(){
int a,b;
cin>>a>>b;
cout<<max({a+b,a-b,a*b})<<endl;
return;
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
#endif
int t = 1;
while(t--){
solve();
}
#ifndef ONLINE_JUDGE
printf("%.10f\n",1.0*clock()/CLOCKS_PER_SEC);
#endif
return 0;
}
