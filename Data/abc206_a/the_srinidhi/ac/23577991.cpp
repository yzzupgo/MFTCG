#include<bits/stdc++.h>
#include<stdio.h>
#include<queue>
#define ll long long
#define ull unsigned long long
#define ln "\n"
using namespace std;
#define dbg(x) cout<<#x<<" = "<<x<<" "
#define rep(i,s,n) for(ll i = (s);i<(n);++i)
void solve() {
ll n;
cin >> n;
ll k = floor(1.08 * n);
if(k == 206) {
cout << "so-so" << ln;
} else if(k < 206) {
cout << "Yay!" << ln;
} else {
cout << ":(" << ln;
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int test = 1;
while(test--) {
solve();
}
return 0;
}
