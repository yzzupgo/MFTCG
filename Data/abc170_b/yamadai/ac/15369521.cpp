#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
template<class T> inline bool chmax(T& a, T b) {
if (a < b) { a = b; return 1; }
return 0; }
template<class T> inline bool chmin(T& a, T b) {
if (a > b) { a = b; return 1; }
return 0; }
ll MOD = 1000000007;
int main(void){
double x,y; cin >> x >> y;
double a = (4*x-y)/2;
double b = x - a;
if(floor(a) == a && a >= 0){
if(floor(b) == b && b >= 0){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
