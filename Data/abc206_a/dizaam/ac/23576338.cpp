#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define koma(x) fixed<<showpoint<<setprecision(x)
void solve() {
int n;
cin >> n;
n *= 1.08;
if(n == 206) {
cout << "so-so" << endl;
} else if(n < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
}
int main() {
ios_base::sync_with_stdio(0);
int n = 1;
for(auto i = 0; i < n; i++) {
solve();
}
return 0;
}
