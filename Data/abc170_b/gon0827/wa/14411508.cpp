#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <deque>
#include <set>
#include <numeric>
using namespace std;
using ll = long long;
using ld = long double;
const ll MOD = 998244353;
const ld PI = acos((long double)(-1));
#define no "no"
#define No "No"
#define NO "NO"
#define yes "yes"
#define Yes "Yes"
#define YES "YES"
#define next '\n'
#define sp " "
#define print(x) cout << (x)
#define println(x) cout << (x) << next
#define stop return(0)
#define rep(i,n) for(int (i) = (0); (i) < (n); (++i))
#define FOR(i,start,end) for(int (i) = (start); (i) < (end); (++i))
#define foreach(elem,_list) for(auto& (elem) : (_list))
#define view(_list) foreach(e, _list){ cout << e << sp; } cout << next
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr)
#define size(s) (s).size()
#define ALL(vec) (vec).begin(), (vec).end()
#define pb(e) push_back(e)
#define INF 1e+9
#define EPS 0.00000001
const int kame = 4;
const int turu = 2;
int main() {
int x, y;
cin >> x >> y;
bool flag = false;
for(int i = 0; i < x; ++i){
int a = i * kame;
int b = (x - i) * turu;
if((a + b) == y){
flag = true;
}
}
if(flag){
println(Yes);
}else{
println(No);
}
}
