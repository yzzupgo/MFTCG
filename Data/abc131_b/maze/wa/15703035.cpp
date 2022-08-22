#include <bits/stdc++.h>
#define rep(i,n) for (long long i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main() {
int n, l;
cin >> n >> l;
vector<int> vec(n);
rep(i,n){
vec[i] = l + i;
}
int a,c;
c = vec[0];
if(c < 0){
c = -c;
}
a = c;
rep(i,n){
int b;
b = vec[i];
if(b < 0){
b = 0 - b;
}
a = min(a,b);
}
int ans = 0;
rep(i,n){
ans += vec[i];
}
cout << ans - a;
return 0;
}
