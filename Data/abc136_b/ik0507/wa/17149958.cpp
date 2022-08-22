#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
const ll INF = 1LL << 60;
int main() {
int N;
cin >> N;
int ans = 0;
if(N>=10){
ans += 9;
if(99>=N){
cout << ans << endl;
return 0;
}
}
else{
ans += N;
cout << ans << endl;
return 0;
}
if(N>=1000){
ans += 899;
if(9999>=N){
cout << ans << endl;
return 0;
}
}
else{
ans += (N-99);
cout << ans << endl;
return 0;
}
if(N>=100000){
ans += 89999;
if(999999>=N){
cout << ans << endl;
return 0;
}
}
else{
ans += (N-9999);
}
cout << ans << endl;
return 0;
}
