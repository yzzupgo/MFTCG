#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
long long res = 0;
for (int i = 1; i <= n; ++i) {
string str = to_string(i);
if (str.length() % 2) {
res++;
}
}
cout << res << endl;
return 0;
}
