#define _GLIBCXX_DEBUG
#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n);i++)
#define all(v) v.begin(),v.end()
#define dec(x) cout << fixed << setprecision(x);
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
using vl = vector<ll>;
using vvl = vector<vl>;
int main(){
ll X,Y;
cin >> X >> Y;
vl vec(X+1);
rep(i,X+1){
vec.at(i) = 2*i + 4*(X-i);
}
ll ans =0;
rep(i,X+1){
if(vec.at(i) == Y){
ans++;
}
}
if(ans != 0){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
