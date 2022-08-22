#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rep2(i,s,n) for (int i = s; i < n; ++i)
#define all(a) a.begin(),a.end()
#define tmax(a,b,c) max(a,max(b,c))
#define tmin(a,b,c) min(a,min(b,c))
#define pb push_back
#define fi first
#define se second
using namespace std;
using ll = long long;
using P = pair<int,int>;
template<class T> inline bool chmin(T& a,T b) {if(a > b){a = b; return true;} return false;}
template<class T> inline bool chmax(T& a,T b) {if(a < b){a = b; return true;} return false;}
const int inf = 1001001001;
int main() {
int n;
cin >> n;
int ans = 0;
auto cnt = [](int n) {
int ret = 0;
while(n > 0) {
ret++;
n /= 10;
}
return ret;
};
rep2(i,1,n+1) {
if(cnt(i)%2 == 1) ans++;
}
cout << ans << endl;
}
