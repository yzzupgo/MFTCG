#include <bits/stdc++.h>
#define debug(x) cout << "[" << #x << " = " << x << "] "
#define ff first
#define ss second
using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using vi = vector<int>;
using tii = tuple<int,int,int>;
const int oo = (int)1e9;
const ll OO = 0x3f3f3f3f3f3f3f3fLL;
int odd(int i){
int cnt = 0;
while(i > 0){
cnt++;
i /= 10;
}
return (cnt & 1);
}
int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);
int n, ans = 0;
cin >> n;
for(int i = 1; i <= n; i++){
if(odd(i)) ans++;
}
cout << ans << endl;
}
