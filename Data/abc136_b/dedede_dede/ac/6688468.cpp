#include <bits/stdc++.h>
using namespace std;
using llong = long long;
#define rep(i,N) for (int i = 0; i < N; i++)
const llong MOD = 1e9+7;
const llong inf = 1<<30;
int main() {
int N; cin >> N;
int res = 0;
for (int i = 1; i <= N; i++) {
string temp = to_string(i);
int digit = temp.size();
if (digit%2) res++;
}
cout << res << endl;
return 0;
}
