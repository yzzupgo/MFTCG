#include <bits/stdc++.h>
using namespace std;
#define REP(i,N) for (int i = 0; i < (int)N; i++)
#define LOOP(i,N) for (int i = 1; i <= (int)N; i++)
#define RREP(i,N) for (int i =(int)N-1; i >= 0; i--)
#define RLOOP(i,N) for (int i =(int)N; i > 0; i--)
#define FOR(i,a,b) for (int i = a; i < (int)b; i++)
#define ALL(x) (x).begin(), (x).end()
#define INF (1 << 30)
#define LLINF (1LL << 62)
#define pb push_back
typedef long long ll;
typedef pair<int, int> Pii;
typedef pair<ll, ll> Pll;
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
int main(){
int x,y;
cin>>x>>y;
LOOP(i,x){
int sum=i*2+(x-i)*4;
if(sum==y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
