#include "bits/stdc++.h"
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
int n, l;
cin >> n >> l;
vector<int> a(n);
int sum = 0, ab = 1e9, di = 0;
rep(i,n){
a[i] = l + i;
sum += a[i];
if(abs(a[i]) < ab){
ab = abs(a[i]);
di = a[i];
}
}
sum -= di;
cout << sum << endl;
return 0;
}
