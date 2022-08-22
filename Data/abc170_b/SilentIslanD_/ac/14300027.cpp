#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define modd(a,b) ((a+2*b)%b)
#define debug(a) cout << #a << ": " << (a) << "\n"
#define ioso ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define rtt cerr << "Time: " << clock()*1.0 / CLOCKS_PER_SEC << endl;
#define ffe freopen("input.txt","r",stdin), freopen("output.txt","w",stdout);
int main() {
#ifndef ONLINE_JUDGE
#endif
ll x, y; cin >> x >> y;
for(int i=0;i<=x;i++) {
for(int j=0;j<=x;j++) {
if(i+j == x) {
if((j*2 + i*4 == y) or (j*4 + i*2==y)) {
cout << "Yes\n"; return 0;
}
}
}
}
cout << "No\n";
}
