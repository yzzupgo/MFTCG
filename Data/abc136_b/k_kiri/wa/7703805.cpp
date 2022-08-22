#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;
bool kisu(int x) { return to_string(x).size() % 2 ? true : false; }
int main() {
int n, ans = 0;
cin >> n;
for (int i = 1; i < n; i++) {
if (kisu(i)) ans++;
}
cout << ans << endl;
return 0;
}
