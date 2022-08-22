#include<bits/stdc++.h>
using namespace std;
#define SZ(v) ((int)(v).size())
#define zero(v) memset(v,0,sizeof(v))
#define rep(i,n) for(int i=0;i<(n);i++)
#define foreach(it,c) for(__typeof(c.begin()) it=c.begin();it!=c.end();it++)
#define all(v) (v).begin(),(v).end()
template<typename T>inline bool chkmin(T &a,const T &b){return a>b?a=b,1:0;}
template<typename T>inline bool chkmax(T &a,const T &b){return a<b?a=b,1:0;}
typedef long long ll;
typedef unsigned uint;
const int INF=0x3f3f3f3f;
const double EPS=1e-10;
typedef pair<int,int>P;
int inline in(){int x=0,c;for(;(uint)((c=getchar())-'0')>=10;)
{if(c=='-')return -in();if(!~c)throw ~0;}do{x=(x<<3)+(x<<1)+(c-'0');}
while((uint)((c=getchar())-'0')<10);return x;}
int x,y;
int main(){
cin>>x>>y;
if((4*x-y)%2==0&&4*x-y>=0&&((4*x-y)/2<=x)){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
return 0;
}
