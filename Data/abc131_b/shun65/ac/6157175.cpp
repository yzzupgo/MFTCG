#include <iostream>
#include <math.h>
#include <numeric>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <queue>
#include <queue>
#include <sstream>
#include <set>
typedef long long ll;
const int dx[8]={1,0,-1,0,1,-1,-1,1};
const int dy[8]={0,1,0,-1,1,1,-1,-1};
const int dr[4] = {-1, 0, 1, 0};
const int dc[4] = { 0, 1, 0,-1};
const int INF = 1e9;
#define FOR(i,a,n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i,n) FOR(i, 0, n)
#define SORT(a) sort(a.begin(),a.end())
#define REVERSE(a) reverse(a.begin(),a.end())
int guki (int a){
if(a%2==0) return 0;
else return 1;
}
int gcd(int a, int b){
if(a%b==0){
return b;
}else{
return (gcd(b,a%b));
}
}
int lcm(int a, int b){
int x = gcd(a,b);
return (a*b/x);
}
const int limit = 51;
int n,m;
bool vec[limit][limit];
bool vis[limit];
void DFS(int x){
if(vis[x]) return;
vis[x] = true;
REP(i,n){
if(vec[i][x]){
DFS(i);
}
}
}
using namespace std;
int main(){
int n,l,ma,sum = 0,anss=INF;
cin >> n >> l;
vector<int> vec(n+2),ans(n+2);
vec[0] = 0;
FOR(i,1,n+1){
vec[i] = vec[i-1] + i+ l -1;
}
ma = vec[n];
FOR(i,1,n+1){
ans[i] = ma-(i+l-1);
sum = max(sum,ans[i]);
anss = min( abs(ma-ans[i]), anss);
}
int ko;
if(ma > 0){
ko = ma-anss;
}else{
ko = ma + anss;
}
cout << ko <<endl;
}
