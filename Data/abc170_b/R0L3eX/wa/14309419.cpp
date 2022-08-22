#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int a, b, animals, legs; cin >> animals >> legs;
b = (legs - 2 * animals) / 2;
a = animals - b;
if (a > 0 || a > 0) {
cout << "Yes";
return 0;
}
cout << "No";
return 0;
}
