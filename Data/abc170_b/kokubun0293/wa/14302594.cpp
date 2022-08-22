#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
#include <queue>
#include <set>
#include <functional>
#include <cmath>
#include <set>
#include <map>
#define REP(i,n) for(int i=0; i<(int)(n); ++i)
#define REPS(i,n) for(int i=1; i<=(int)(n); ++i)
#define RREP(i,n) for(int i=(int)(n)-1; i>=0; --i)
#define RREPS(i,n) for(int i=(int)(n); i>0; --i)
#define FOR(i,s,e) for(int i=(int)(s); i<(int)(e); ++i)
#define RFOR(i,s,e) for(int i=(int)(e)-1; i>=(int)(s); --i)
#define All(a) (a).begin(),(a).end()
#define RAll(a) (a).rbegin(),(a).rend()
#define dump(x) cerr << #x << " = " << (x) << endl;
#define INF 1e9
#define INFL 1e18
#define MOD (int)(1e9+7)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
using vi = vector<int>;
using vii = vector<vi>;
using vs = vector<string>;
using pii = pair<int, int>;
using Graph = vector<vector<int>>;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
template<class T>bool chmax(T &a, const T &b) {
if (a < b) { a = b; return 1; }
return 0;
}
template<class T>bool chmin(T &a, const T &b) {
if (a > b) { a = b; return 1; }
return 0;
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
bool f = false;
REP(i, x + 1) {
if (2 * i + 3 * (x-i) == y) {
f = true;
break;
}
}
if (f) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
