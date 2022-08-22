#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
int main()
{
string N;
cin >> N;
int digit = N.size();
int ans = 0;
int x = 0;
reverse(N.begin(), N.end());
rep(i, N.size()) {
x += (N.at(i) - '0') * pow(10,i);
}
if (digit % 2 == 0) {
ans = 9;
if (digit == 2) {
ans = 9;
} else {
int z = digit - (digit/2 + 1);
rep(i, z) {
ans += 900 * pow(100, i);
}
}
} else {
ans = 9;
if (digit == 1) {
ans = x;
} else {
int y = digit - (digit/2 + 2);
rep(i, y) {
ans += 900 * pow(10, i);
}
ans += x - (pow(10, (digit-1)) - 1);
}
}
cout << ans << endl;
}
