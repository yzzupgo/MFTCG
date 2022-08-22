#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int n, l; cin >> n >> l;
vector<int> d(n);
int sum = 0;
int min_d_abs = 2147483647;
int index;
for (int i = 0; i < n; i++) {
d[i] = l + i;
sum += d[i];
if (abs(d[i]) < abs(min_d_abs)) {
min_d_abs = d[i];
index = i;
}
}
cout << sum - d[index] << endl;
return 0;
}
