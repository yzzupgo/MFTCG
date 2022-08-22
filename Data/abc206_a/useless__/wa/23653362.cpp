#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
void solve() {
int n;
cin >> n;
double x = n * 1.08;
if(x < (double)n) {
cout << "Yay!" << endl;
} else if(x == (double)n) {
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
