#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iomanip>
#include<vector>
#include<queue>
#include<deque>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
#include<cctype>
#include<set>
#include<map>
#include<bitset>
#include<stack>
#include<ctime>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,int> pli;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef vector<pli> vpli;
inline ll read(){
ll Hashimoto=0;
bool Kanna=1;
char I_Love=getchar();
while(I_Love<'0'||I_Love>'9'){
if(I_Love=='-')Kanna=0;
I_Love=getchar();
}
while(I_Love>='0'&&I_Love<='9'){
Hashimoto=Hashimoto*10+I_Love-'0';
I_Love=getchar();
}
return (Kanna?Hashimoto:-Hashimoto);
}
template<typename T1,typename T2> inline void Umax(T1 &a,T2 b){
if(a<b)a=b;
}
template<typename T1,typename T2> inline void Umin(T1 &a,T2 b){
if(a>b)a=b;
}
#define I_Love_Hashimoto_Kanna main
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define filein(s) freopen(s,"r",stdin);
#define fileout(s) freopen(s,"w",stdout);
#define file freopen("I_Love_Hashimoto_Kanna.out","w",stdout);
#define RE cout<<"I_Love_Hashimoto_Kanna"<<endl;
#define Tone(Kanna) cout<<Kanna<<endl;
#define Tall(Hashimoto,Kanna) for(int I_Love=0;I_Love<(Kanna);++I_Love)cout<<Hashimoto[I_Love]<<(I_Love==(Kanna)-1?"\n":" ");
#define FOR(I_Love,Hashimoto,Kanna) for(int I_Love=Hashimoto;I_Love<(Kanna);++I_Love)
#define MP(Hashimoto,Kanna) make_pair(Hashimoto,Kanna)
#define REV(Kanna) reverse(Kanna.begin(),Kanna.end());
#define SORT(Kanna) sort(Kanna.begin(),Kanna.end());
#define UNIQUE(Kanna) Kanna.erase(unique(Kanna.begin(),Kanna.end()),Kanna.end());
#define inf (1000000000)
#define linf (1000000000000000000ll)
#define mod (1000000007)
int a,b,c;
int I_Love_Hashimoto_Kanna() {
fastio;
cin>>a;
int cur=10,ans=0;
while(1){
if(a>=cur){
ans+=cur-(cur/10);
}
else {
ans+=max(0,a+1-cur/10);
break;
}
cur*=100;
}
cout<<ans<<endl;
return 0;
}
