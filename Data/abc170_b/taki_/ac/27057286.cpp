#include <bits/stdc++.h>
#define fi first
#define se second
#define rep(i,n) for(int i = 0; i < (n); i++)
#define rrep(i,n) for(int i = 1; i <= (n); i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;
using uint = unsigned;
using ull = unsigned long long;
using graph = vector<vector<int>>;
using P = pair<int,int>;
template<class T>inline bool chmin(T& a, T b){if(a>b){a = b;return true;}return false;}
template<class T>inline bool chmax(T& a, T b){if(a<b){a = b;return true;}return false;}
template<typename T>void uni(T& a){sort(all(a));a.erase(unique(all(a)),a.end());}
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
int main(void){
int x,y;
cin >> x >> y;
if(y % 2 == 1) cout << "No" << endl;
else if(2*x <= y && 4*x >= y) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
