#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
void solve() {
int n;
cin >> n;
int x = n * 1.08;
if(x < 206) {
cout << "Yay!" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t = 1;
while(t--) {
solve();
}
return 0;
}
