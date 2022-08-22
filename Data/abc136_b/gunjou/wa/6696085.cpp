#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(x,y) for(int i=x;i<y;i++)
#define REP(x,y) for(int j=x;j<y;j++)
#define Rep(x,y) for(int k=x;k<y;k++)
#define str string
#define vint vector<int>
#define vvint vector<vector<int>>
#define vc vector<char>
#define vvc vector<vector<char>>
#define vool vector<bool>
#define vtr vector<str>
#define vvtr vector<vector<str>>
#define pb() push_back()
#define elif else if
#define all(x) x.begin(),x.end()
int shizuku(int);
struct UnionFind{
vint par;
UnionFind(int N):par(N){
rep(0,N)par[i]=i;
}
int root(int x){
if(par[x]==x)return x;
return par[x]=root(par[x]);
}
void unite(int x,int y){
int rx=root(x);
int ry=root(y);
if(rx==ry)return;
par[rx]=ry;
}
bool same(int x,int y){
return root(x)==root(y);
}
};
signed main(){
int pow,D,G,N,M,X,count=0,count2=0;
double d;
int C='A'-'a';
char op;
str T;
cin>>N;
vint A(N);
if(to_string(N).size()==1)cout<<N<<endl;
if(to_string(N).size()==3)cout<<9+(N-99)<<endl;
if(to_string(N).size()==5)cout<<9+899+(N-9999)<<endl;
if(to_string(N).size()==4)cout<<909<<endl;
if(to_string(N).size()==2)cout<<9<<endl;
if(to_string(N).size()==6)cout<<90909<<endl;
}
