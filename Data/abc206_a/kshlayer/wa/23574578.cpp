#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int lli;
typedef vector<int> vi;
void solve() {
int n;
cin >> n;
if((int)((float)n * 1.08) < 206) {
cout << "Yay!";
} else {
cout << "so-so";
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
lli test = 1;
while(test--) {
solve();
}
return 0;
}
