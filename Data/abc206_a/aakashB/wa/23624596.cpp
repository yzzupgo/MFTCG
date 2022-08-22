#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
int n;
cin >> n;
int val = ceil(n * 1.08);
if(val < 206) {
cout << "Yay!\n";
} else if(val == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
return;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
clock_t t1 = clock();
int t;
t = 1;
while(t--) {
solve();
}
cerr << "Time elapsed: " << (double)(clock() - t1) / 1000 << " s" << endl;
}
