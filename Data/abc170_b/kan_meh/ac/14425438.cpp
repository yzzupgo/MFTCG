#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=(a);i<(n);i++)
#define per(i,a,n) for (int i=(n)-1;i>=(a);i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef long long LL;
typedef pair<int,int> PII;
typedef long double DB;
mt19937 mrand(random_device{}());
const LL mod=1000000007;
int rnd(int x) { return (int)mrand() % x;}
LL powmod(LL a,LL b) { LL res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
LL gcd(LL a,LL b) { return b?gcd(b,a%b):a;}
int x,y;
int main() {
scanf("%d%d",&x,&y);
int suc=0;
rep(i,0,x+1) {
if (2*i+4*(x-i)==y) suc=1;
}
if (suc) puts("Yes"); else puts("No");
}
