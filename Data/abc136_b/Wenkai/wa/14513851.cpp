#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n, no_odd = 0;
cin >> n;
for (int i = 0; i < n; i++) {
if (to_string(i).length() % 2 == 1) {
no_odd++;
}
}
cout << no_odd;
}
