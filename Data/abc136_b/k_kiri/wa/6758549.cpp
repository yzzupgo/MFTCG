#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;
int main() {
int n;
cin >> n;
int ans = 0;
for (int i = 1; i < n; i++) {
if (1 <= i && i <= 9)
ans++;
else if (100 <= i && i <= 999)
ans++;
else if (10000 <= i && i <= 99999)
ans++;
}
cout << ans << endl;
return 0;
}
