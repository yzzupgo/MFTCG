#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <climits>
#include <string>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int taste = 0;
for (int i = 1; i <= N; i++) {
taste += L+i-1;
}
int ans = INT_MAX;
for (int i = 1; i <= N; i++) {
if(abs(ans) > abs(taste - (L+i-1))) {
ans = taste - (L+i-1);
}
}
cout << ans << endl;
return 0;
}
