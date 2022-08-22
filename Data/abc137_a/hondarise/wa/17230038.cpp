#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pint = pair<int, int>;
int main() {
int A, B;
cin >> A >> B;
int ans = max(A + B, A - B);
ans = (ans, A * B);
cout << ans << endl;
return 0;
}
