#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define FORL(i,x) for(int i=head[x];i;i=nxt[i])
#define ALL(a) (a).begin(),(a).end()
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define PB push_back
#define MP make_pair
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
int main() {
int N;
scanf("%d", &N);
int N_hold = N;
int len = 0;
while(N>0){
N /= 10;
++len;
}
if(len==1) cout << N << endl;
if(len==2) cout << 9 << endl;
if(len==3) cout << 9+(N_hold-99) << endl;
if(len==4) cout << 909 << endl;
if(len==5) cout << 909+(N_hold-9999) << endl;
if(len==6) cout << 90909 << endl;
}
