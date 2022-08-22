#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for (int i = 0; i < n; i++)
int num(int m) {
int res = 9;
REP(i, m) {
res *= 10;
}
res /= 10;
return res;
}
int main() {
int n;
cin >> n;
int d = n;
int count = 0;
while (d > 0) {
d /= 10;
count++;
}
int res = 0;
if (count % 2 == 0) {
for (int i = 1; i < count; i += 2) {
res += num(i);
}
}
else {
for (int i = 1; i <= count; i += 2) {
res += num(i);
}
res -= 10 * count - n + 1;
}
cout << res << endl;
}
