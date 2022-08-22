#include "bits/stdc++.h"
using namespace std;
int main() {
int n;
cin >> n;
int l = to_string(n).size();
int ans = 0;
switch (l) {
case 1:
ans = n;
break;
case 2:
ans = 9;
break;
case 3:
ans = 9 + n % 100 + 1;
break;
case 4:
ans = 909;
break;
case 5:
ans = 909 + n % 10000 + 1;
break;
case 6:
ans = 90909;
break;
default:
ans = 90909 + n % 1000000 + 1;
break;
}
cout << ans << endl;
}
