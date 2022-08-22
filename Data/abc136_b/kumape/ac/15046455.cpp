#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<numeric>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
template<typename A, typename B> bool chmin(A &a, const B &b){ return b < a && (a = b, true); }
template<typename A, typename B> bool chmax(A &a, const B &b){ return a < b && (a = b, true); }
int main () {
int n,cnt = 0;
cin >> n;
string s = to_string(n);
for (int i = 1; i <= n; i++){
s = to_string(i);
if (s.size() % 2 == 1){
cnt++;
}
}
cout << cnt << '\n';
return 0;
}
