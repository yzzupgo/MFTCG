#include <bits/stdc++.h>
#define rep(i,cc,n) for(int i=cc;i<=n;++i)
#define drep(i,cc,n) for(int i=cc;i>=n;--i)
template<class T>bool chmax(T &a, const T &b) {
if(a < b) {
a = b;
return 1;
}
return 0;
}
template<class T>bool chmin(T &a, const T &b) {
if(b < a) {
a = b;
return 1;
}
return 0;
}
const long long INF = 1LL << 60;
const long long MOD = 1000000007;
typedef long long ll;
using namespace std;
int main() {
int N;
cin >> N;
if((N * 108) > 20700) {
cout << ":(" << endl;
} else if((N * 108) < 20500) {
cout << "Yay!" << endl;
} else {
cout << "so-so" << endl;
}
return 0;
}
