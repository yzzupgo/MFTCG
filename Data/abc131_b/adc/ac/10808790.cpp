#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int n, l;
cin >> n >> l;
int ans = 0;
for(int i = 1; i < n+1; i++) {
ans = ans + i + l - 1;
}
if(l >= 0) {
ans = ans - (1 + l - 1);
cout << ans << endl;
return 0;
} else if (l < 0) {
if((l * -1) +1 >= n) {
ans = ans - (n + l - 1);
cout << ans << endl;
return 0;
} else {
for(int i = 1; i < n; i++) {
if((l * -1) +1 == i) {
ans = ans - (i + l - 1);
cout << ans << endl;
return 0;
}
}
}
}
}
