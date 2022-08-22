#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
int main()
{
int N, L; cin >> N >> L;
int sum = 0, min = INT_MAX;
for (int i = 0; i < N; i++) {
int val = L + i;
sum += val;
if (abs(val) < min) {
min = abs(val);
}
cout << val << " " << sum << endl;
}
if (sum >= 0) {
sum -= min;
} else {
sum += min;
}
cout << sum << endl;
return 0;
}
