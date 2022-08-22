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
if(Y % 2 == 0 && 2 <= (Y / X)&& (Y / X) <= 4){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
