#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
const int inf = 1001001001;
int main() {
ll n,l,sayuri=INF,sum=0;
cin >> n >> l;
vector<ll> data(n);
rep(i,n){
data.at(i)=l+i;
sayuri=min(sayuri,data.at(i));
sum+=data.at(i);
}
cout << sum-sayuri << endl;
}
