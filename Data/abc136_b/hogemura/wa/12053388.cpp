#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int res;
for (int i = 1; i <= N; i++) {
if (to_string(i).length() % 2) {
res++;
}
}
cout << res << endl;
return 0;
}
