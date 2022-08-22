#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define ALL(v) (v).begin(), (v).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;
typedef long long ll;
const int INTINF = INT_MAX >> 1;
bool input(){
return true;
}
int main(){
ll n,cnt=0;
cin >> n;
for(int i=1; i<=n; i++){
string s;
s = to_string(i);
if(s.size()%2!=0)cnt++;
}
cout << cnt << endl;
return 0;
}
