#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
const ll INF = 1LL << 60;
int main() {
int A,B;
cin >> A >> B;
if(A >= 13){
cout << B << endl;
}
else if((A >= 6)||(A <= 12)){
cout << B/2 << endl;
}
else{
cout << 0 << endl;
}
}
