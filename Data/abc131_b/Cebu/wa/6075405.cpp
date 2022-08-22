#include <iostream>
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int app, sum;
for (int i = 1; i < n + 1; i++) {
app = l + i - 1;
sum += app;
}
int eat;
if (l >= 0) {
sum = sum - l;
}
else if (l < 0 && n < l*-1) {
sum = sum - (l + n - 1);
}
cout << sum << endl;
return 0;
}
