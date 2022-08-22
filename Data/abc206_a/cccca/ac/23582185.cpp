#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 2e5 + 5;
const int mod = 1e9 + 7;
const int INF = 1 << 30;
int a[maxn];
int main() {
int n, ans;
cin >> n;
ans = 1.08 * n;
if(ans < 206) {
puts("Yay!");
} else if(ans == 206) {
puts("so-so");
} else {
puts(":(");
}
return 0;
}
