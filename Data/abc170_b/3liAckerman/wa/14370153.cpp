#include <bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define fod(i,a,b) for(int i=a;i>=b;i--)
#define me0(a) memset(a,0,sizeof(a))
#define me1(a) memset(a,-1,sizeof(a))
#define op freopen("in.txt", "r", stdin)
#define pii pair<int,int>
#define mp(x,y) make_pair(x,y)
using namespace std;
const int INF = 0x3f3f3f3f;
typedef long long LL;
void read(int& val) { int x = 0; int bz = 1; char c; for (c = getchar(); (c<'0' || c>'9') && c != '-'; c = getchar()); if (c == '-') { bz = -1; c = getchar(); }for (; c >= '0' && c <= '9'; c = getchar()) x = x * 10 + c - 48; val = x * bz; }
const int maxn = 1e6+10;
int main(){
int x,y;
cin>>x>>y;
int mi = x*2,mx = x*4;
if(mi<=y&&y<=mx){
cout<<"YES"<<endl;
}
else {
cout<<"NO"<<endl;
}
}
