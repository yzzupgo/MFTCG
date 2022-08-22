#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1001001000;
int main() {
int N;
cin >> N;
int res = 0;
for (int i = 1; i <= N; ++i) {
string s = to_string(i);
if (s.size() & 1) ++res;
}
cout << res << endl;
}
