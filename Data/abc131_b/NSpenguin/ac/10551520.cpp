#include<iostream>
#include<string>
#include<vector>
#include<numeric>
#include<math.h>
#include<algorithm>
#include<iomanip>
using namespace std;
int main() {
int N;
int L;
cin >> N;
cin >> L;
int sum = 0;
for (int i = 1; i <= N; i++) {
sum += L + i - 1;
}
int val = sum - L;
int d = abs(sum - val);
int dmin = d;
int ans = val;
for (int i = 1; i <= N; i++) {
val = sum - (L + i - 1);
d = abs(val - sum);
if (d < dmin) {
ans = val;
dmin = d;
}
}
cout << ans << endl;
return 0;
}
