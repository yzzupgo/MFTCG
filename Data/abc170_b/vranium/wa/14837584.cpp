#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3f3f3f3f
#define infll 0x3f3f3f3f3f3f3f3f
#define all(x) (x).begin(),(x).end()
#define forn(i,a,b) for (int i=a; i<(signed)(b); ++i)
#define pb push_back
#define debug(x) cerr<< #x <<" : "<< x << endl;
#define debuga(A,N) cerr<< #A <<" : [";for(int i = 0; i<N;i++) cerr<<A[i]<<" "; cerr<<"]\n";
#define debuga2(A,N,M) cerr<< #A << " : \n"; for(int i=0;i<N;i++){cerr<<"[";for(int j=0;j<M;++j) cerr<<A[i][j]<<" ";cerr<<"]\n";}
#define debugp(p) cerr<< #p <<" : "<<"("<<(p).first<<","<<(p).second<<")\n";
#define debugv(v) cerr<< #v <<" : "<<"[";for(int i = 0; i< (v).size(); i++) cerr<<v[i]<<" "; cerr<<"]\n";
#define debugv2(v) cerr<< #v << " : \n"; for(int i=0;i<v.size();i++){cerr<<"[";for(int j=0;j<(v[0].size());++j) cerr<<v[i][j]<<" ";cerr<<"]\n";}
#define debugs(m) cerr<< #m <<" : [ "; for(auto itr = m.begin(); itr!=m.end();itr++) cerr<<*itr<<" "; cerr<<"]\n";
#define debugm(m) cerr<< #m <<" : [ "; for(auto itr = m.begin();itr!=m.end(); itr++) cerr<<"("<<itr->first<<","<<itr->second<<") ";cerr<<"]\n";
void solve(){
int x,y; cin >> x >> y;
bool can = 0;
forn(i,0,101){
int cranes = i;
int turtules = x-i;
if(2*cranes + 4*turtules == y){
can = 1;
break;
}
}
cout << (can ? "Yes" : "No");
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
return 0;
}
