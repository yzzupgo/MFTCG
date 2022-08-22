#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
int main() {
int n, l;
cin >> n >> l;
int sum = 0;
rep(i,n) {
sum += l + i - 1;
}
if (l >= 0) {
cout << sum - l << endl;
return 0;
}
else if (l + n < 1) {
cout << sum - (l + n - 1) << endl;
return 0;
}
else {
cout << sum << endl;
return 0;
}
}
