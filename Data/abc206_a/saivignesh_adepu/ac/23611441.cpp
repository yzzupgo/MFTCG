#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void test() {
int n;
cin >> n;
int ans = int(1.08 * n);
if(ans < 206) {
cout << "Yay!" << "\n";
} else if(ans == 206) {
cout << "so-so" << "\n";
} else {
cout << ":(" << "\n";
}
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
ll t = 1;
for(int tt = 1; tt <= t; tt++) {
test();
}
return 0;
}
