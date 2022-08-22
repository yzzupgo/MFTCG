#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2e5 + 5;
const long long mod = 1e9 + 7;
int x, y;
void solve(){
for(int i = 0; i <= x; i++){
int curr = i * 2;
int rem = (x - i) * 4;
if(curr + rem == y){
cout << "Yes\n";
return;
}
}
cout << "No\n";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin >> x >> y;
solve();
return 0;
}
