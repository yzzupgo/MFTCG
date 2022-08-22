#include <bits/stdc++.h>
using namespace std;
#define pb push_back
void solve() {
int n;
cin >> n;
int ans = floor(n * 1.08);
if(ans < 206) {
cout << "Yay!";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
int main() {
int t;
t = 1;
while(t--) {
solve();
cout << endl;
}
return 0;
}
