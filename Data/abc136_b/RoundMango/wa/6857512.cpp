#include <bits/stdc++.h>
using namespace std;
int ans, n;
int main() {
cin>>n;
if (n > 9999 || n > 999) ans = 90909;
else if (n > 99) {
for (int i = 100; i <= n; i++) ans++;
ans += 9;
}
else if (n > 9) ans = 9;
else for (ans = 0; ans < n; ans++);
cout<<ans;
}
