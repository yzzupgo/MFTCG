#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <stdio.h>
#include <list>
#include <numeric>
#include <stack>
#include <queue>
#include <tuple>
#include <bitset>
#include <map>
#include <math.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(a) begin(a),end(a)
typedef long long ll;
typedef pair<int,int> P;
const int inf=1000000007;
const ll mod=1000000007;
const double PI=3.14159265358979323846;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
ll gcd(ll a, ll b){
if (b==0) return a;
else return gcd(b,a%b);
}
int cans(bool f){
if(f) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
vector<vector<int>> G;
void dfs(int v,vector<bool> &visited,int &res ){
bool end = true;
rep(i,visited.size()) if(!visited[i] && i != v) end = false;
if(end){
res++;
return;
}
visited[v] = true;
for(auto nv : G[v]){
if(visited[nv]) continue;
dfs(nv,visited,res);
}
visited[v] = false;
}
int main(){
int N,L;
cin >> N >> L;
int ans = 0;
int dif = inf;
for(int i = 1; i<= N; i++){
ans += L+i-1;
dif = min(dif,abs(L+i-1));
}
cout << ans - dif << endl;
}
