#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr long long MOD = 1000000007;
constexpr long long INF = 1LL << 60;
const long double PI = acosl(-1.0);
constexpr long double EPS = 1e-11;
template<class T> inline bool chmin(T& a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template<class T> inline bool chmax(T& a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
int main(){
ll X,Y;
cin>>X>>Y;
for (ll y = 0; y <= X;y++){
if(Y==2*X+2*y){
cout<<"Yes"<<endl;
return 0;
}
}
cout << "No" << endl;
}
