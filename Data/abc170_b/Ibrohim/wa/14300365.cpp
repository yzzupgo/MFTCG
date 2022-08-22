#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define fr first
#define sc second
#define r_0 return 0
#define ld long double
using namespace std;
const ll N = 1e2 + 7;
const ll mod = 1e9 + 7;
void solve(){
int x , y;
cin >> x >> y;
for(int i = 0; i <= x; ++ i){
int x2 = i * 2;
int x3 = (x - i) * 3;
if(x2 + x3 == y){
cout << "Yes";return;
}
}
cout << "No";
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int tt = 1;
while(tt --){
solve();
}
}
