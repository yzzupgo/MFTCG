#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main() {
int N;
cin >> N;
int ans = 0;
if (N < 10){
ans = N;
} else if (N < 100) {
ans = 9;
} else if (N < 1000) {
ans = 9;
ans += N - 99;
} else if (N < 10000) {
ans = 9;
ans += 900;
} else if (N < 100000) {
ans = 9;
ans += 900;
ans += N - 9999;
} else {
ans = 9;
ans += 900;
ans += 100000 - 1 - 9999;
}
cout << ans << "\n";
return 0;
}
