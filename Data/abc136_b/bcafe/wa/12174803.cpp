#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main() {
int N;
cin >> N;
int ans = 0;
for (int ii = 1; ii <= N; ++ii){
int digit = 0;
int tmp = ii;
while (tmp > 0) {
digit++;
tmp = tmp >> 1;
}
if (digit % 2 == 1){
ans++;
}
}
cout << ans << "\n";
return 0;
}
