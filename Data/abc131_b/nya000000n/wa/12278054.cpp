#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
const ll mod = 1000000007;
const ll INF = 1001001001;
const ll LINF = 1001001001001001001;
void prvec(vector<ll> vec){
ll n = vec.size();
rep(i,n) cout << i << " " << vec.at(i) << "\n";
}
void pr2d(vector<vector<ll>> vvec){
ll h = vvec.size();
ll w = vvec.at(0).size();
rep(i,h){
rep(j,w){
cout << vvec.at(i).at(j) << " ";
}
cout << "\n";
}
}
int main(){
ll n , l ; cin >> n >> l;
ll aji = 0;
ll mnm = INF;
rep(i,n){
aji += l + i;
mnm = min(mnm,abs(l+i-1));
}
cout << aji - mnm << endl;
}
