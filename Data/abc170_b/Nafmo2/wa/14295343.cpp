#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<iomanip>
typedef long long int ll;
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define REP(i,n) for (unsigned int i=0;i<(n);i++)
#define EREP(i,n) for (int i=1;i<=(n);i++)
#define ALL(a) (a).begin(),(a).end()
#ifdef EVEL
#define DEB(X) cout << #X << ":" <<X<<" " ;
#define TF(f) f ? cout<<"true  " : cout<<"false ";
#define END cout<<"\n";
#else
#define DEB(X) {}
#define TF(f) {}
#define END {}
#endif
const int MOD = 1000000007 ;
const int INF = 2000000000;
ll A,B,C,D,E,N,X[10];
ll ans=0;
string S;
bool F=false;
int main(){
cin>>A>>B;
ans=A*2-2;
EREP(i,A){
ans+=2;
if(ans==B){F=true;}
}
if(F)cout<<"Yes";
else cout<<"No";
return 0;
}
