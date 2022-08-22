#include <stdio.h>
#include <algorithm>
#include <assert.h>
#include <cmath>
#include <deque>
#include <iostream>
#include <limits.h>
#include<functional>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <stack>
#include <deque>
#include <tuple>
#include <float.h>
#include<time.h>
#define LL long long
#define pii pair<int,int>
#define pLL pair<LL,LL>
#define mp make_pair
#define mt make_tuple
#define pq priority_queue<LL>
#define pqg priority_queue<LL,vector<LL>,greater<LL>>
#define pb push_back
#define vecLL vector<LL>
#define vecpii vector<pii>
#define vecpLL vector<pLL>
#define vecbL vector<bool>
#define endl "\n"
#define REP(e,v) for(auto e:v)
#define rep(i,a,n) for(LL i = a; i < n;i++)
#define Arep(i,a,n) for(i = a; i < n;i++)
#define MOD 1000000007
#define INF LLONG_MAX/2
#define DINF DBL_MAX/2
using namespace std;
LL linp(){
LL x;
scanf("%lld",&x);
return x;
}
map<LL,LL> factalization(LL N){
map<LL,LL> fac;
LL oriN = N;
LL div = 1;
for(LL i = 2;i*i <= N;++i){
while(N%i == 0){
fac[i]++;
div *= i;
N /= i;
}
}
if(oriN/div != 1){
fac[oriN/div]++;
}
return fac;
}
vecLL bit(LL i,LL N){
vecLL biti(N);
rep(x,0,N){
biti[N - 1 - x] = (i >> x) & 1;
}
return biti;
}
void swap(LL &a, LL &b){
LL t = a;
a = b;
b = t;
return ;
}
LL mod(LL i){
LL mi = i % MOD;
if(mi < 0)
mi += MOD;
return mi;
}
LL digit(LL x,LL n){
LL count = 1;
while(x >= n){
x = x/n;
count++;
}
return count;
}
LL gcd(LL i,LL j){
if(j != 0)
return gcd(j, i % j);
else
return i;
}
pLL extgcd(LL a,LL b){
pLL ans;
if(b != 0){
pLL next = extgcd(b,a%b);
ans.first = next.second;
ans.second = next.first-(a/b)*next.second;
}
else{
ans = pLL(1,0);
}
return ans;
}
LL division(LL a, LL b,LL m){
return mod(mod(a) * mod(extgcd(b,m).first));
}
LL numperm_mod(LL x,LL y){
LL res = 1;
for(LL i = x; i >= y; i--){
res = mod(res * mod(i));
}
return mod(res);
}
LL numperm(LL x,LL y){
LL res = 1;
for(LL i = x; i >= y; i--){
res *= i;
}
return res;
}
LL pow_mod(LL x,LL y){
x = mod(x);
if(y == 1){
return mod(x);
}
LL res = mod(pow_mod(mod(x*x),y/2));
if(y % 2 == 0){
return res;
}
else{
return mod(x*res);
}
}
LL pow(LL x,LL y){
if(y == 1){
return x;
}
if(y % 2 == 0){
return pow(x*x,y/2);
}
else{
return x*pow(x*x,y/2);
}
}
bool isPrime(LL X){
rep(i,2,(LL)(sqrt(X)+1)){
if(X % i == 0){
return false;
}
}
return true;
}
vecLL Eratosthenes(LL n){
bool isPrime[n];
fill(isPrime,isPrime+n,true);
isPrime[0] = isPrime[1] = false;
rep(i,2,sqrt(n)+1){
if(isPrime[i]){
for(LL j = 2*i ;j <= n ; j += i){
isPrime[j] = false;
}
}
}
vecLL P;
rep(i,2,n+1){
if(isPrime[i]){
P.push_back(i);
}
}
return P;
}
struct edge {
LL to,cost;
double dcost;
} ;
struct vertex{
LL key;
double dkey;
vector<edge> edges;
};
class Graph{
public:
LL V;
vertex* vertices;
Graph(LL v){
V = v;
vertices = new vertex[V];
rep(i,0,V){
vertices[i].key = -1;
vertices[i].dkey = -1;
}
}
void setDE(LL i,LL j,LL cos){
edge e;
e.to= j;
e.cost = cos;
vertices[i].edges.push_back(e);
return;
}
void setDE(LL i,LL j,double dcos){
edge e;
e.to= j;
e.dcost = dcos;
vertices[i].edges.push_back(e);
return;
}
void setUDE(LL i,LL j,LL cos){
edge ei,ej;
ei.to = j;
ej.to = i;
ei.cost = ej.cost = cos;
vertices[i].edges.push_back(ei);
vertices[j].edges.push_back(ej);
return;
}
void setUDE(LL i,LL j,double dcos){
edge ei,ej;
ei.to = j;
ej.to = i;
ei.dcost = ej.dcost = dcos;
vertices[i].edges.push_back(ei);
vertices[j].edges.push_back(ej);
return;
}
void setKey(LL i,LL newKey){
vertices[i].key = newKey;
}
void setKey(LL i,double newKey){
vertices[i].key = newKey;
}
edge getEdge(LL i,LL j){
rep(a,0,vertices[i].edges.size()){
if(vertices[i].edges[a].to == j){
return vertices[i].edges[a];
}
}
return (edge){j,INF,DINF};
}
void bellman_ford(LL s,LL b[]){
fill(b,b+V,INF);
b[s] = 0;
while(true){
bool update = false;
rep(i,0,V){
rep(j,0,vertices[i].edges.size()){
edge e = vertices[i].edges[j];
if(b[e.to] > b[i] + e.cost){
b[e.to] = b[i] + e.cost;
update = true;
}
}
}
if(!update)
break;
}
return;
}
void dijkstra(LL s, LL d[]) {
priority_queue<pLL, vector<pLL>, greater<pLL> > que;
fill(d,d+V,INF);
d[s] = 0;
que.push(pLL(0, s));
while (!que.empty()) {
pLL p = que.top();
que.pop();
LL v = p.second;
if (d[v] < p.first) continue;
rep(i,0, vertices[v].edges.size()) {
edge e = vertices[v].edges[i];
if (d[e.to] > d[v] + e.cost) {
d[e.to] = d[v] + e.cost;
que.push(pLL(d[e.to], e.to));
}
}
}
return;
}
void warshall_floyd(LL **w){
rep(i,0,V){
rep(j,0,V){
w[i][j] = INF;
}
}
rep(i,0,V){
rep(j,0,vertices[i].edges.size()){
w[i][vertices[i].edges[j].to] = vertices[i].edges[j].cost;
}
}
rep(i,0,V){
w[i][i] = 0;
}
rep(i,0,V){
rep(j,0,V){
rep(k,0,V){
w[i][j] = min(w[i][j],w[i][k]+w[k][j]);
}
}
}
}
};
class UF
{
public:
LL N;
LL* par;
LL* rank;
UF(LL n){
N = n;
par = new LL[N];
rank = new LL[N];
rep(i,0,N){
par[i] = i;
rank[i] = i;
}
return;
}
LL root(LL x){
if(x == par[x])
return x;
else
return par[x] = root(par[x]);
}
bool same(LL x,LL y){
return (root(x) == root(y));
}
void Union(LL x,LL y){
LL rtx = root(x);
LL rty = root(y);
if(rank[rtx] < rank[rty]){
par[rtx] = rty;
}
else{
par[rty] = rtx;
if(rank[rtx] == rank[rty]){
rank[rtx]++;
}
}
}
};
class ST{
};
LL solveA(){
LL A,B;
cin >> A >> B;
if(A <= 5){
cout << 0;
return 0;
}
if(A <= 12){
cout << B/2;
return 0;
}
cout << B;
return 0;
}
LL solveB(){
return 0;
}
LL solveC(){
return 0;
}
LL solveD(){
return 0;
}
LL solveE(){
return 0;
}
signed main(){
solveA();
return 0;
}
