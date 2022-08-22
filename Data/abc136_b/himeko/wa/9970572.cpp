#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int digit(int n) {
int i = 1;
while (n >= 10) {
n = n/10;
i++;
}
return i;
}
int main() {
int n;
cin >> n;
int ans = 0;
for (int i = 1; i <= n; i++) {
if (digit(n) % 2 == 1) {ans++;}
}
cout << ans << endl;
}
